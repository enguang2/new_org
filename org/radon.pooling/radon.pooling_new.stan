data {
  int<lower=0> N;
  vector[N] y;
  vector<lower=0,upper=1>[N] x;
  vector[N] z_test;
}
parameters {
  real a;
  real b;                           
  real<lower=0> sigma_y;
}
model {
  y ~ normal(a + b * x, sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | a+b*(x[observe_i]),sigma_y);
}
}