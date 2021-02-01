generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | mu,sigma);
}
}
data {
  real U;
  int<lower=1> N;
  real<upper=U> y[N];
  vector[N] z_test;
}
parameters {
  real mu;
  real<lower=0,upper=2> sigma;
}
model {
  for (n in 1:N)
    y[n] ~ normal(mu,sigma); // T[,U];
}


generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | mu,sigma);
}
}
data {
  real U;
  int<lower=1> N;
  real<upper=U> y[N];
  vector[N] z_test;
}
parameters {
  real mu;
  real<lower=0,upper=2> sigma;
}
model {
  for (n in 1:N)
    y[n] ~ normal(mu,sigma); // T[,U];
}


generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | mu,sigma);
}
}
data {
  real U;
  int<lower=1> N;
  real<upper=U> y[N];
  vector[N] z_test;
}
parameters {
  real mu;
  real<lower=0,upper=2> sigma;
}
model {
  for (n in 1:N)
    y[n] ~ normal(mu,sigma); // T[,U];
}


generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | mu,sigma);
}
}
data {
  real U;
  int<lower=1> N;
  real<upper=U> y[N];
  vector[N] z_test;
}
parameters {
  real mu;
  real<lower=0,upper=2> sigma;
}
model {
  for (n in 1:N)
    y[n] ~ normal(mu,sigma); // T[,U];
}


