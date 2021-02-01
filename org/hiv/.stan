generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | y_hat[observe_i],sigma_y);
}
}data {
  int<lower=0> J; 
  int<lower=0> N;
  int<lower=1,upper=J> person[N];
  vector[N] time;
  vector[N] y;
  vector[N] z_test;
} 
parameters {
  vector[J] a1;
  vector[J] a2;
  real mu_a1;
  real mu_a2;
  real<lower=0,upper=100> sigma_a1;
  real<lower=0,upper=100> sigma_a2;
  real<lower=0,upper=100> sigma_y;
}
transformed parameters {
  vector[N] y_hat;

  for (i in 1:N)
    y_hat[i] <- a1[person[i]] + a2[person[i]] * time[i];
} 
model {
  mu_a1 ~ normal(0, 1);
  mu_a2 ~ normal(0, 1);
  a1 ~ normal(mu_a1, sigma_a1);
  a2 ~ normal(0.1 * mu_a2, sigma_a2);

  y ~ normal(y_hat, sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | y_hat[observe_i],sigma_y);
}
}data {
  int<lower=0> J; 
  int<lower=0> N;
  int<lower=1,upper=J> person[N];
  vector[N] time;
  vector[N] y;
  vector[N] z_test;
} 
parameters {
  vector[J] a1;
  vector[J] a2;
  real mu_a1;
  real mu_a2;
  real<lower=0,upper=100> sigma_a1;
  real<lower=0,upper=100> sigma_a2;
  real<lower=0,upper=100> sigma_y;
}
transformed parameters {
  vector[N] y_hat;

  for (i in 1:N)
    y_hat[i] <- a1[person[i]] + a2[person[i]] * time[i];
} 
model {
  mu_a1 ~ normal(0, 1);
  mu_a2 ~ normal(0, 1);
  a1 ~ normal(mu_a1, sigma_a1);
  a2 ~ normal(0.1 * mu_a2, sigma_a2);

  y ~ normal(y_hat, sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | y_hat[observe_i],sigma_y);
}
}data {
  int<lower=0> J; 
  int<lower=0> N;
  int<lower=1,upper=J> person[N];
  vector[N] time;
  vector[N] y;
  vector[N] z_test;
} 
parameters {
  vector[J] a1;
  vector[J] a2;
  real mu_a1;
  real mu_a2;
  real<lower=0,upper=100> sigma_a1;
  real<lower=0,upper=100> sigma_a2;
  real<lower=0,upper=100> sigma_y;
}
transformed parameters {
  vector[N] y_hat;

  for (i in 1:N)
    y_hat[i] <- a1[person[i]] + a2[person[i]] * time[i];
} 
model {
  mu_a1 ~ normal(0, 1);
  mu_a2 ~ normal(0, 1);
  a1 ~ normal(mu_a1, sigma_a1);
  a2 ~ normal(0.1 * mu_a2, sigma_a2);

  y ~ normal(y_hat, sigma_y);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | y_hat[observe_i],sigma_y);
}
}data {
  int<lower=0> J; 
  int<lower=0> N;
  int<lower=1,upper=J> person[N];
  vector[N] time;
  vector[N] y;
  vector[N] z_test;
} 
parameters {
  vector[J] a1;
  vector[J] a2;
  real mu_a1;
  real mu_a2;
  real<lower=0,upper=100> sigma_a1;
  real<lower=0,upper=100> sigma_a2;
  real<lower=0,upper=100> sigma_y;
}
transformed parameters {
  vector[N] y_hat;

  for (i in 1:N)
    y_hat[i] <- a1[person[i]] + a2[person[i]] * time[i];
} 
model {
  mu_a1 ~ normal(0, 1);
  mu_a2 ~ normal(0, 1);
  a1 ~ normal(mu_a1, sigma_a1);
  a2 ~ normal(0.1 * mu_a2, sigma_a2);

  y ~ normal(y_hat, sigma_y);
}
