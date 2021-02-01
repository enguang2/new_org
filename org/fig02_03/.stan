
data {
  int<lower=1> n;
  vector[n] y;
  vector[n] z_test;
}
parameters {
  vector[n] mu;
  real<lower=0> sigma_level;
  real<lower=0> sigma_irreg;
}
transformed parameters {
  vector[n] yhat;
  yhat = mu;
}
model {
  for(t in 2:n)
    mu[t] ~ normal(mu[t-1], sigma_level);

  y ~ normal(yhat, sigma_irreg);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | yhat[observe_i],sigma_irreg);
}
}

data {
  int<lower=1> n;
  vector[n] y;
  vector[n] z_test;
}
parameters {
  vector[n] mu;
  real<lower=0> sigma_level;
  real<lower=0> sigma_irreg;
}
transformed parameters {
  vector[n] yhat;
  yhat = mu;
}
model {
  for(t in 2:n)
    mu[t] ~ normal(mu[t-1], sigma_level);

  y ~ normal(yhat, sigma_irreg);
}


generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | yhat[observe_i],sigma_irreg);
}
}

data {
  int<lower=1> n;
  vector[n] y;
  vector[n] z_test;
}
parameters {
  vector[n] mu;
  real<lower=0> sigma_level;
  real<lower=0> sigma_irreg;
}
transformed parameters {
  vector[n] yhat;
  yhat = mu;
}
model {
  for(t in 2:n)
    mu[t] ~ normal(mu[t-1], sigma_level);

  y ~ normal(yhat, sigma_irreg);
}


generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | yhat[observe_i],sigma_irreg);
}
}

data {
  int<lower=1> n;
  vector[n] y;
  vector[n] z_test;
}
parameters {
  vector[n] mu;
  real<lower=0> sigma_level;
  real<lower=0> sigma_irreg;
}
transformed parameters {
  vector[n] yhat;
  yhat = mu;
}
model {
  for(t in 2:n)
    mu[t] ~ normal(mu[t-1], sigma_level);

  y ~ normal(yhat, sigma_irreg);
}


