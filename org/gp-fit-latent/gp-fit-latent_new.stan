// Fit the hyperparameters of a latent-variable Gaussian process with an
// exponentiated quadratic kernel and a Gaussian likelihood

data {
int<lower=1> N;
real x[N];
vector[N] y;
  vector[N] z_test;
}
transformed data {
real delta;
delta = 0.000000001;
}
parameters {
real<lower=0> rho;
real<lower=0> alpha;
real<lower=0> sigma;
vector[N] eta;
}

transformed parameters {
vector[N] f;

matrix[N, N] L_K;
matrix[N, N] K;
K = cov_exp_quad(x, alpha, rho);

// diagonal elements
for (n in 1:N)
K[n, n] = K[n, n] + delta;

L_K = cholesky_decompose(K);
f = L_K * eta;

}
model {
//vector[N] f;

//matrix[N, N] L_K;
//matrix[N, N] K;
//K = cov_exp_quad(x, alpha, rho);

// diagonal elements
//for (n in 1:N)
//K[n, n] = K[n, n] + delta;

//L_K = cholesky_decompose(K);
//f = L_K * eta;


rho ~ inv_gamma(5, 5);
alpha ~ normal(0, 1);
sigma ~ normal(0, 1);
eta ~ normal(0, 1);

y ~ normal(f, sigma);
}
generated quantities{
real lik;
lik = 0;
for (observe_i in 1:N) {
	   lik = lik+  normal_lpdf(z_test[observe_i] | f[observe_i],sigma);
}
}