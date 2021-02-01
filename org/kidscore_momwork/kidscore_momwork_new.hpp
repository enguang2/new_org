
// Code generated by stanc b0a4f0db
#include <stan/model/model_header.hpp>
namespace kidscore_momwork_new_model_namespace {


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
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 18, column 2 to column 17)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 19, column 2 to column 22)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 26, column 0 to column 9)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 27, column 0 to column 8)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 29, column 4 to column 150)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 28, column 23 to line 30, column 1)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 28, column 0 to line 30, column 1)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 22, column 2 to line 23, column 47)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 2, column 2 to column 17)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 3, column 9 to column 10)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 3, column 2 to column 22)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 4, column 15 to column 16)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 4, column 2 to column 18)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 5, column 9 to column 10)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 5, column 2 to column 19)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 8, column 9 to column 10)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 8, column 2 to column 18)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 9, column 9 to column 10)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 9, column 2 to column 18)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 10, column 9 to column 10)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 10, column 2 to column 18)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 12, column 4 to column 33)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 13, column 4 to column 33)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 14, column 4 to column 33)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 11, column 17 to line 15, column 3)",
                                                      " (in 'org/kidscore_momwork/kidscore_momwork_new.stan', line 11, column 2 to line 15, column 3)"};



class kidscore_momwork_new_model final : public model_base_crtp<kidscore_momwork_new_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> kid_score;
  std::vector<int> mom_work;
  Eigen::Matrix<double, -1, 1> z_test;
  Eigen::Matrix<double, -1, 1> work2;
  Eigen::Matrix<double, -1, 1> work3;
  Eigen::Matrix<double, -1, 1> work4;
 
 public:
  ~kidscore_momwork_new_model() { }
  
  inline std::string model_name() const final { return "kidscore_momwork_new_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 b0a4f0db", "stancflags = "};
  }
  
  
  kidscore_momwork_new_model(stan::io::var_context& context__,
                             unsigned int random_seed__ = 0,
                             std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "kidscore_momwork_new_model_namespace::kidscore_momwork_new_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 9;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 9;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 9;
      current_statement__ = 9;
      check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 10;
      validate_non_negative_index("kid_score", "N", N);
      current_statement__ = 11;
      context__.validate_dims("data initialization","kid_score","double",
          context__.to_vec(N));
      kid_score = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(kid_score, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> kid_score_flat__;
        current_statement__ = 11;
        assign(kid_score_flat__, nil_index_list(),
          context__.vals_r("kid_score"),
          "assigning variable kid_score_flat__");
        current_statement__ = 11;
        pos__ = 1;
        current_statement__ = 11;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 11;
          assign(kid_score, cons_list(index_uni(sym1__), nil_index_list()),
            kid_score_flat__[(pos__ - 1)], "assigning variable kid_score");
          current_statement__ = 11;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 12;
      validate_non_negative_index("mom_work", "N", N);
      current_statement__ = 13;
      context__.validate_dims("data initialization","mom_work","int",
          context__.to_vec(N));
      mom_work = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 13;
      assign(mom_work, nil_index_list(), context__.vals_i("mom_work"),
        "assigning variable mom_work");
      current_statement__ = 14;
      validate_non_negative_index("z_test", "N", N);
      current_statement__ = 15;
      context__.validate_dims("data initialization","z_test","double",
          context__.to_vec(N));
      z_test = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(z_test, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> z_test_flat__;
        current_statement__ = 15;
        assign(z_test_flat__, nil_index_list(), context__.vals_r("z_test"),
          "assigning variable z_test_flat__");
        current_statement__ = 15;
        pos__ = 1;
        current_statement__ = 15;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 15;
          assign(z_test, cons_list(index_uni(sym1__), nil_index_list()),
            z_test_flat__[(pos__ - 1)], "assigning variable z_test");
          current_statement__ = 15;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 16;
      validate_non_negative_index("work2", "N", N);
      current_statement__ = 17;
      work2 = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(work2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 18;
      validate_non_negative_index("work3", "N", N);
      current_statement__ = 19;
      work3 = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(work3, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 20;
      validate_non_negative_index("work4", "N", N);
      current_statement__ = 21;
      work4 = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(work4, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 26;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 22;
        assign(work2, cons_list(index_uni(i), nil_index_list()),
          logical_eq(mom_work[(i - 1)], 2), "assigning variable work2");
        current_statement__ = 23;
        assign(work3, cons_list(index_uni(i), nil_index_list()),
          logical_eq(mom_work[(i - 1)], 3), "assigning variable work3");
        current_statement__ = 24;
        assign(work4, cons_list(index_uni(i), nil_index_list()),
          logical_eq(mom_work[(i - 1)], 4), "assigning variable work4");}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 4;
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
    static const char* function__ = "kidscore_momwork_new_model_namespace::log_prob";
(void) function__;  // suppress unused var warning

    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> beta;
      beta = Eigen::Matrix<local_scalar_t__, -1, 1>(4);
      stan::math::fill(beta, DUMMY_VAR__);
      
      current_statement__ = 1;
      beta = in__.vector(4);
      local_scalar_t__ sigma;
      sigma = DUMMY_VAR__;
      
      current_statement__ = 2;
      sigma = in__.scalar();
      current_statement__ = 2;
      if (jacobian__) {
        current_statement__ = 2;
        sigma = stan::math::lb_constrain(sigma, 0, lp__);
      } else {
        current_statement__ = 2;
        sigma = stan::math::lb_constrain(sigma, 0);
      }
      {
        current_statement__ = 8;
        lp_accum__.add(
          normal_lpdf<propto__>(kid_score,
            add(
              add(add(beta[(1 - 1)], multiply(beta[(2 - 1)], work2)),
                multiply(beta[(3 - 1)], work3)),
              multiply(beta[(4 - 1)], work4)), sigma));
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
    static const char* function__ = "kidscore_momwork_new_model_namespace::write_array";
(void) function__;  // suppress unused var warning

    (void) function__;  // suppress unused var warning

    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      Eigen::Matrix<double, -1, 1> beta;
      beta = Eigen::Matrix<double, -1, 1>(4);
      stan::math::fill(beta, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 1;
      beta = in__.vector(4);
      double sigma;
      sigma = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sigma = in__.scalar();
      current_statement__ = 2;
      sigma = stan::math::lb_constrain(sigma, 0);
      for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
        vars__.emplace_back(beta[(sym1__ - 1)]);}
      vars__.emplace_back(sigma);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double lik;
      lik = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 4;
      lik = 0;
      current_statement__ = 7;
      for (int observe_i = 1; observe_i <= N; ++observe_i) {
        current_statement__ = 5;
        lik = (lik +
                normal_lpdf<false>(z_test[(observe_i - 1)],
                  (((beta[(1 - 1)] +
                      (beta[(2 - 1)] * work2[(observe_i - 1)])) +
                     (beta[(3 - 1)] * work3[(observe_i - 1)])) +
                    (beta[(4 - 1)] * work4[(observe_i - 1)])), sigma));}
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
      Eigen::Matrix<double, -1, 1> beta;
      beta = Eigen::Matrix<double, -1, 1>(4);
      stan::math::fill(beta, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> beta_flat__;
        current_statement__ = 1;
        assign(beta_flat__, nil_index_list(), context__.vals_r("beta"),
          "assigning variable beta_flat__");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
          current_statement__ = 1;
          assign(beta, cons_list(index_uni(sym1__), nil_index_list()),
            beta_flat__[(pos__ - 1)], "assigning variable beta");
          current_statement__ = 1;
          pos__ = (pos__ + 1);}
      }
      double sigma;
      sigma = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sigma = context__.vals_r("sigma")[(1 - 1)];
      double sigma_free__;
      sigma_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sigma_free__ = stan::math::lb_free(sigma, 0);
      for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
        vars__.emplace_back(beta[(sym1__ - 1)]);}
      vars__.emplace_back(sigma_free__);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("beta");
    names__.emplace_back("sigma");
    names__.emplace_back("lik");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(4)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "sigma");
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
    
    for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "lik");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" << 4 << "},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lik\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" << 4 << "},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"lik\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
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

using stan_model = kidscore_momwork_new_model_namespace::kidscore_momwork_new_model;

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
  return kidscore_momwork_new_model_namespace::profiles__;
}

#endif

