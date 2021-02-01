data {
  int<lower=0> N; 
  vector[N] y;
  vector[N] y_lag;
  vector[N] z_test;
}
parameters {
  vector[2] beta;
  real<lower=0> sigma;
} 
model {
  y ~ normal(beta[1] + beta[2] * y_lag,sigma);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | beta[1]+(beta[2])*(y_lag[observe_i]),sigma);
}
}