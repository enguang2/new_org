data {
  int<lower=1> K;
  int<lower=1> N;
  real y[N];
  vector[N] z_test;
}
parameters {
  simplex[K] theta;
  simplex[K] mu_prop;
  real mu_loc;
  real<lower=0> mu_scale;
  real<lower=0> sigma[K];
}
transformed parameters {
  ordered[K] mu;
  //real[K] mu;
  mu <- mu_loc + mu_scale * cumulative_sum(mu_prop);
}
model {
  // prior
  mu_loc ~ cauchy(0,5);
  mu_scale ~ cauchy(0,5);
  sigma ~ cauchy(0,5);

  // likelihood
  { 
    real ps[K];
    vector[K] log_theta;
    log_theta <- log(theta);

    for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(y[n],mu[k],sigma[k]);
      }
      target+=(log_sum_exp(ps));    
    }
  }
}

generated quantities{
real lik;
real ps[K];  
vector[K] log_theta;
log_theta <- log(theta);

lik = 0;

for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(z_test[n],mu[k],sigma[k]);
      }
      lik+=(log_sum_exp(ps));    
    }

}
data {
  int<lower=1> K;
  int<lower=1> N;
  real y[N];
  vector[N] z_test;
}
parameters {
  simplex[K] theta;
  simplex[K] mu_prop;
  real mu_loc;
  real<lower=0> mu_scale;
  real<lower=0> sigma[K];
}
transformed parameters {
  ordered[K] mu;
  //real[K] mu;
  mu <- mu_loc + mu_scale * cumulative_sum(mu_prop);
}
model {
  // prior
  mu_loc ~ cauchy(0,5);
  mu_scale ~ cauchy(0,5);
  sigma ~ cauchy(0,5);

  // likelihood
  { 
    real ps[K];
    vector[K] log_theta;
    log_theta <- log(theta);

    for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(y[n],mu[k],sigma[k]);
      }
      target+=(log_sum_exp(ps));    
    }
  }
}

generated quantities{
real lik;
real ps[K];  
vector[K] log_theta;
log_theta <- log(theta);

lik = 0;

for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(z_test[n],mu[k],sigma[k]);
      }
      lik+=(log_sum_exp(ps));    
    }

}
generated quantities{
real lik;
real ps[K];  
vector[K] log_theta;
log_theta <- log(theta);

lik = 0;

for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(z_test[n],mu[k],sigma[k]);
      }
      lik+=(log_sum_exp(ps));    
    }

}
data {
  int<lower=1> K;
  int<lower=1> N;
  real y[N];
  vector[N] z_test;
}
parameters {
  simplex[K] theta;
  simplex[K] mu_prop;
  real mu_loc;
  real<lower=0> mu_scale;
  real<lower=0> sigma[K];
}
transformed parameters {
  ordered[K] mu;
  //real[K] mu;
  mu <- mu_loc + mu_scale * cumulative_sum(mu_prop);
}
model {
  // prior
  mu_loc ~ cauchy(0,5);
  mu_scale ~ cauchy(0,5);
  sigma ~ cauchy(0,5);

  // likelihood
  { 
    real ps[K];
    vector[K] log_theta;
    log_theta <- log(theta);

    for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(y[n],mu[k],sigma[k]);
      }
      target+=(log_sum_exp(ps));    
    }
  }
}

generated quantities{
real lik;
real ps[K];  
vector[K] log_theta;
log_theta <- log(theta);

lik = 0;

for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(z_test[n],mu[k],sigma[k]);
      }
      lik+=(log_sum_exp(ps));    
    }

}
generated quantities{
real lik;
real ps[K];  
vector[K] log_theta;
log_theta <- log(theta);

lik = 0;

for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(z_test[n],mu[k],sigma[k]);
      }
      lik+=(log_sum_exp(ps));    
    }

}
data {
  int<lower=1> K;
  int<lower=1> N;
  real y[N];
  vector[N] z_test;
}
parameters {
  simplex[K] theta;
  simplex[K] mu_prop;
  real mu_loc;
  real<lower=0> mu_scale;
  real<lower=0> sigma[K];
}
transformed parameters {
  ordered[K] mu;
  //real[K] mu;
  mu <- mu_loc + mu_scale * cumulative_sum(mu_prop);
}
model {
  // prior
  mu_loc ~ cauchy(0,5);
  mu_scale ~ cauchy(0,5);
  sigma ~ cauchy(0,5);

  // likelihood
  { 
    real ps[K];
    vector[K] log_theta;
    log_theta <- log(theta);

    for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(y[n],mu[k],sigma[k]);
      }
      target+=(log_sum_exp(ps));    
    }
  }
}

generated quantities{
real lik;
real ps[K];  
vector[K] log_theta;
log_theta <- log(theta);

lik = 0;

for (n in 1:N) {
      for (k in 1:K) {
        ps[k] <- log_theta[k]
                 + normal_log(z_test[n],mu[k],sigma[k]);
      }
      lik+=(log_sum_exp(ps));    
    }

}
