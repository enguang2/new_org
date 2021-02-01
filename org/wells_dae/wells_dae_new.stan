data {
  int<lower=0> N;
  int<lower=0,upper=1> switched[N];
  vector[N] dist;
  vector[N] arsenic;
  vector[N] educ;
  int z_test[N];
}
transformed data {
  vector[N] dist100;         // rescaling
  vector[N] educ4;
  dist100 <- dist / 100.0;
  educ4   <- educ / 4.0;
}
parameters {
  vector[4] beta;
}
model {
  switched ~ bernoulli_logit(beta[1] + beta[2] * dist100 
                             + beta[3] * arsenic
                             + beta[4] * educ4);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  bernoulli_logit_lpmf(z_test[observe_i] | beta[1]+(beta[2])*(dist100[observe_i])+(beta[3])*(arsenic[observe_i])+(beta[4])*(educ4[observe_i]));
}
}
