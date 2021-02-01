generated quantities{
real lik;
lik = 0;
for (n in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | a[county[n]]+b*(x[n]),sigma_y);
}
}data {
  int<lower=0> N;
  int<lower=0> J;
  vector[N] y;
  int<lower=0,upper=1> x[N];
  int county[N];
  vector[N] z_test;
}
parameters {
  real a[J];
  real b;                           
  real mu_a;
  real<lower=0> sigma_y;
  real<lower=0> sigma_a;
}
model {
  a ~ normal(mu_a, sigma_a);            
  for (n in 1:N)
    y[n] ~ normal(a[county[n]] + b * x[n], sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (n in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | a[county[n]]+b*(x[n]),sigma_y);
}
}data {
  int<lower=0> N;
  int<lower=0> J;
  vector[N] y;
  int<lower=0,upper=1> x[N];
  int county[N];
  vector[N] z_test;
}
parameters {
  real a[J];
  real b;                           
  real mu_a;
  real<lower=0> sigma_y;
  real<lower=0> sigma_a;
}
model {
  a ~ normal(mu_a, sigma_a);            
  for (n in 1:N)
    y[n] ~ normal(a[county[n]] + b * x[n], sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (n in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | a[county[n]]+b*(x[n]),sigma_y);
}
}data {
  int<lower=0> N;
  int<lower=0> J;
  vector[N] y;
  int<lower=0,upper=1> x[N];
  int county[N];
  vector[N] z_test;
}
parameters {
  real a[J];
  real b;                           
  real mu_a;
  real<lower=0> sigma_y;
  real<lower=0> sigma_a;
}
model {
  a ~ normal(mu_a, sigma_a);            
  for (n in 1:N)
    y[n] ~ normal(a[county[n]] + b * x[n], sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (n in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | a[county[n]]+b*(x[n]),sigma_y);
}
}data {
  int<lower=0> N;
  int<lower=0> J;
  vector[N] y;
  int<lower=0,upper=1> x[N];
  int county[N];
  vector[N] z_test;
}
parameters {
  real a[J];
  real b;                           
  real mu_a;
  real<lower=0> sigma_y;
  real<lower=0> sigma_a;
}
model {
  a ~ normal(mu_a, sigma_a);            
  for (n in 1:N)
    y[n] ~ normal(a[county[n]] + b * x[n], sigma_y);
}
