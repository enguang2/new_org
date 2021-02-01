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
