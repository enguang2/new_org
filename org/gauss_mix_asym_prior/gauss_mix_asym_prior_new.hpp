
// Code generated by stanc b0a4f0db
#include <stan/model/model_header.hpp>
namespace gauss_mix_asym_prior_new_model_namespace {


inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}

inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}


using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 

stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 8, column 2 to column 15)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 9, column 2 to column 25)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 10, column 2 to column 31)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 25, column 0 to column 9)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 26, column 0 to column 8)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 28, column 3 to line 30, column 71)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 27, column 23 to line 31, column 1)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 27, column 0 to line 31, column 1)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 14, column 1 to column 22)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 15, column 1 to column 24)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 16, column 1 to column 25)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 17, column 1 to column 20)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 19, column 3 to line 21, column 58)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 18, column 1 to line 21, column 58)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 2, column 1 to column 18)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 3, column 8 to column 9)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 3, column 1 to column 13)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 4, column 8 to column 9)",
                                                      " (in 'org/gauss_mix_asym_prior/gauss_mix_asym_prior_new.stan', line 4, column 1 to column 18)"};



class gauss_mix_asym_prior_new_model final : public model_base_crtp<gauss_mix_asym_prior_new_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> y;
  Eigen::Matrix<double, -1, 1> z_test;
 
 public:
  ~gauss_mix_asym_prior_new_model() { }
  
  inline std::string model_name() const final { return "gauss_mix_asym_prior_new_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 b0a4f0db", "stancflags = "};
  }
  
  
  gauss_mix_asym_prior_new_model(stan::io::var_context& context__,
                                 unsigned int random_seed__ = 0,
                                 std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "gauss_mix_asym_prior_new_model_namespace::gauss_mix_asym_prior_new_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 15;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 15;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 15;
      current_statement__ = 15;
      check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 16;
      validate_non_negative_index("y", "N", N);
      current_statement__ = 17;
      context__.validate_dims("data initialization","y","double",
          context__.to_vec(N));
      y = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(y, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 17;
        assign(y_flat__, nil_index_list(), context__.vals_r("y"),
          "assigning variable y_flat__");
        current_statement__ = 17;
        pos__ = 1;
        current_statement__ = 17;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 17;
          assign(y, cons_list(index_uni(sym1__), nil_index_list()),
            y_flat__[(pos__ - 1)], "assigning variable y");
          current_statement__ = 17;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 18;
      validate_non_negative_index("z_test", "N", N);
      current_statement__ = 19;
      context__.validate_dims("data initialization","z_test","double",
          context__.to_vec(N));
      z_test = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(z_test, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> z_test_flat__;
        current_statement__ = 19;
        assign(z_test_flat__, nil_index_list(), context__.vals_r("z_test"),
          "assigning variable z_test_flat__");
        current_statement__ = 19;
        pos__ = 1;
        current_statement__ = 19;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 19;
          assign(z_test, cons_list(index_uni(sym1__), nil_index_list()),
            z_test_flat__[(pos__ - 1)], "assigning variable z_test");
          current_statement__ = 19;
          pos__ = (pos__ + 1);}
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 2;
      num_params_r__ += 2;
      num_params_r__ += 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "gauss_mix_asym_prior_new_model_namespace::log_prob";
(void) function__;  // suppress unused var warning

    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> mu;
      mu = Eigen::Matrix<local_scalar_t__, -1, 1>(2);
      stan::math::fill(mu, DUMMY_VAR__);
      
      current_statement__ = 1;
      mu = in__.vector(2);
      std::vector<local_scalar_t__> sigma;
      sigma = std::vector<local_scalar_t__>(2, DUMMY_VAR__);
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 2;
        assign(sigma, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable sigma");}
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 2;
        if (jacobian__) {
          current_statement__ = 2;
          assign(sigma, cons_list(index_uni(sym1__), nil_index_list()),
            stan::math::lb_constrain(sigma[(sym1__ - 1)], 0, lp__),
            "assigning variable sigma");
        } else {
          current_statement__ = 2;
          assign(sigma, cons_list(index_uni(sym1__), nil_index_list()),
            stan::math::lb_constrain(sigma[(sym1__ - 1)], 0),
            "assigning variable sigma");
        }}
      local_scalar_t__ theta;
      theta = DUMMY_VAR__;
      
      current_statement__ = 3;
      theta = in__.scalar();
      current_statement__ = 3;
      if (jacobian__) {
        current_statement__ = 3;
        theta = stan::math::lub_constrain(theta, 0, 1, lp__);
      } else {
        current_statement__ = 3;
        theta = stan::math::lub_constrain(theta, 0, 1);
      }
      {
        current_statement__ = 9;
        lp_accum__.add(normal_lpdf<propto__>(sigma, 0, 2));
        current_statement__ = 10;
        lp_accum__.add(normal_lpdf<propto__>(mu[(1 - 1)], 4, 0.5));
        current_statement__ = 11;
        lp_accum__.add(normal_lpdf<propto__>(mu[(2 - 1)], -4, 0.5));
        current_statement__ = 12;
        lp_accum__.add(beta_lpdf<propto__>(theta, 5, 5));
        current_statement__ = 14;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 13;
          lp_accum__.add(
            log_mix(theta,
              normal_lpdf<false>(y[(n - 1)], mu[(1 - 1)], sigma[(1 - 1)]),
              normal_lpdf<false>(y[(n - 1)], mu[(2 - 1)], sigma[(2 - 1)])));}
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "gauss_mix_asym_prior_new_model_namespace::write_array";
(void) function__;  // suppress unused var warning

    (void) function__;  // suppress unused var warning

    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      Eigen::Matrix<double, -1, 1> mu;
      mu = Eigen::Matrix<double, -1, 1>(2);
      stan::math::fill(mu, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 1;
      mu = in__.vector(2);
      std::vector<double> sigma;
      sigma = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 2;
        assign(sigma, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable sigma");}
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 2;
        assign(sigma, cons_list(index_uni(sym1__), nil_index_list()),
          stan::math::lb_constrain(sigma[(sym1__ - 1)], 0),
          "assigning variable sigma");}
      double theta;
      theta = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 3;
      theta = in__.scalar();
      current_statement__ = 3;
      theta = stan::math::lub_constrain(theta, 0, 1);
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        vars__.emplace_back(mu[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        vars__.emplace_back(sigma[(sym1__ - 1)]);}
      vars__.emplace_back(theta);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double lik;
      lik = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 5;
      lik = 0;
      current_statement__ = 8;
      for (int observe_i = 1; observe_i <= N; ++observe_i) {
        current_statement__ = 6;
        lik = (lik +
                log_mix(theta,
                  normal_lpdf<false>(z_test[(observe_i - 1)], mu[(1 - 1)],
                    sigma[(1 - 1)]),
                  normal_lpdf<false>(z_test[(observe_i - 1)], mu[(2 - 1)],
                    sigma[(2 - 1)])));}
      vars__.emplace_back(lik);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      Eigen::Matrix<double, -1, 1> mu;
      mu = Eigen::Matrix<double, -1, 1>(2);
      stan::math::fill(mu, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> mu_flat__;
        current_statement__ = 1;
        assign(mu_flat__, nil_index_list(), context__.vals_r("mu"),
          "assigning variable mu_flat__");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 1;
          assign(mu, cons_list(index_uni(sym1__), nil_index_list()),
            mu_flat__[(pos__ - 1)], "assigning variable mu");
          current_statement__ = 1;
          pos__ = (pos__ + 1);}
      }
      std::vector<double> sigma;
      sigma = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      assign(sigma, nil_index_list(), context__.vals_r("sigma"),
        "assigning variable sigma");
      std::vector<double> sigma_free__;
      sigma_free__ = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 2;
        assign(sigma_free__, cons_list(index_uni(sym1__), nil_index_list()),
          stan::math::lb_free(sigma[(sym1__ - 1)], 0),
          "assigning variable sigma_free__");}
      double theta;
      theta = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 3;
      theta = context__.vals_r("theta")[(1 - 1)];
      double theta_free__;
      theta_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 3;
      theta_free__ = stan::math::lub_free(theta, 0, 1);
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        vars__.emplace_back(mu[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        vars__.emplace_back(sigma_free__[(sym1__ - 1)]);}
      vars__.emplace_back(theta_free__);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("mu");
    names__.emplace_back("sigma");
    names__.emplace_back("theta");
    names__.emplace_back("lik");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(2)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(2)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "sigma" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "lik");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "sigma" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "lik");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" << 2 << "},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"array\",\"length\":" << 2 << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lik\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" << 2 << "},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"array\",\"length\":" << 2 << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lik\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  

    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        

};
}

using stan_model = gauss_mix_asym_prior_new_model_namespace::gauss_mix_asym_prior_new_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return gauss_mix_asym_prior_new_model_namespace::profiles__;
}

#endif


