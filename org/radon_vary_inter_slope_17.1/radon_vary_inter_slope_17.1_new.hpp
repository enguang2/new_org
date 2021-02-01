
// Code generated by stanc b0a4f0db
#include <stan/model/model_header.hpp>
namespace radon_vary_inter_slope_17x461_new_model_namespace {


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
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 10, column 2 to column 22)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 11, column 2 to column 24)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 12, column 2 to column 24)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 13, column 2 to column 14)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 14, column 2 to column 14)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 15, column 2 to column 12)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 16, column 2 to column 12)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 19, column 2 to column 18)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 22, column 4 to column 51)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 21, column 2 to line 22, column 51)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 33, column 0 to column 9)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 34, column 0 to column 8)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 36, column 4 to column 72)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 35, column 23 to line 37, column 1)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 35, column 0 to line 37, column 1)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 25, column 2 to column 24)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 26, column 2 to column 24)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 28, column 2 to column 28)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 29, column 2 to column 28)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 30, column 2 to column 27)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 2, column 2 to column 17)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 3, column 2 to column 17)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 4, column 9 to column 10)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 4, column 2 to column 14)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 5, column 25 to column 26)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 5, column 2 to column 28)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 6, column 13 to column 14)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 6, column 2 to column 16)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 7, column 9 to column 10)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 7, column 2 to column 19)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 13, column 9 to column 10)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 14, column 9 to column 10)",
                                                      " (in 'org/radon_vary_inter_slope_17.1/radon_vary_inter_slope_17.1_new.stan', line 19, column 9 to column 10)"};



class radon_vary_inter_slope_17x461_new_model final : public model_base_crtp<radon_vary_inter_slope_17x461_new_model> {

 private:
  int N;
  int J;
  Eigen::Matrix<double, -1, 1> y;
  std::vector<int> x;
  std::vector<int> county;
  Eigen::Matrix<double, -1, 1> z_test;
 
 public:
  ~radon_vary_inter_slope_17x461_new_model() { }
  
  inline std::string model_name() const final { return "radon_vary_inter_slope_17x461_new_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 b0a4f0db", "stancflags = "};
  }
  
  
  radon_vary_inter_slope_17x461_new_model(stan::io::var_context& context__,
                                          unsigned int random_seed__ = 0,
                                          std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "radon_vary_inter_slope_17x461_new_model_namespace::radon_vary_inter_slope_17x461_new_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 21;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 21;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 21;
      current_statement__ = 21;
      check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 22;
      context__.validate_dims("data initialization","J","int",
          context__.to_vec());
      J = std::numeric_limits<int>::min();
      
      current_statement__ = 22;
      J = context__.vals_i("J")[(1 - 1)];
      current_statement__ = 22;
      current_statement__ = 22;
      check_greater_or_equal(function__, "J", J, 0);
      current_statement__ = 23;
      validate_non_negative_index("y", "N", N);
      current_statement__ = 24;
      context__.validate_dims("data initialization","y","double",
          context__.to_vec(N));
      y = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(y, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 24;
        assign(y_flat__, nil_index_list(), context__.vals_r("y"),
          "assigning variable y_flat__");
        current_statement__ = 24;
        pos__ = 1;
        current_statement__ = 24;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 24;
          assign(y, cons_list(index_uni(sym1__), nil_index_list()),
            y_flat__[(pos__ - 1)], "assigning variable y");
          current_statement__ = 24;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 25;
      validate_non_negative_index("x", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization","x","int",
          context__.to_vec(N));
      x = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 26;
      assign(x, nil_index_list(), context__.vals_i("x"),
        "assigning variable x");
      current_statement__ = 26;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 26;
        current_statement__ = 26;
        check_greater_or_equal(function__, "x[sym1__]", x[(sym1__ - 1)], 0);}
      current_statement__ = 26;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 26;
        current_statement__ = 26;
        check_less_or_equal(function__, "x[sym1__]", x[(sym1__ - 1)], 1);}
      current_statement__ = 27;
      validate_non_negative_index("county", "N", N);
      current_statement__ = 28;
      context__.validate_dims("data initialization","county","int",
          context__.to_vec(N));
      county = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 28;
      assign(county, nil_index_list(), context__.vals_i("county"),
        "assigning variable county");
      current_statement__ = 29;
      validate_non_negative_index("z_test", "N", N);
      current_statement__ = 30;
      context__.validate_dims("data initialization","z_test","double",
          context__.to_vec(N));
      z_test = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(z_test, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> z_test_flat__;
        current_statement__ = 30;
        assign(z_test_flat__, nil_index_list(), context__.vals_r("z_test"),
          "assigning variable z_test_flat__");
        current_statement__ = 30;
        pos__ = 1;
        current_statement__ = 30;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 30;
          assign(z_test, cons_list(index_uni(sym1__), nil_index_list()),
            z_test_flat__[(pos__ - 1)], "assigning variable z_test");
          current_statement__ = 30;
          pos__ = (pos__ + 1);}
      }
      current_statement__ = 31;
      validate_non_negative_index("a", "J", J);
      current_statement__ = 32;
      validate_non_negative_index("b", "J", J);
      current_statement__ = 33;
      validate_non_negative_index("y_hat", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
      num_params_r__ += 1;
      num_params_r__ += 1;
      num_params_r__ += J;
      num_params_r__ += J;
      num_params_r__ += 1;
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
    static const char* function__ = "radon_vary_inter_slope_17x461_new_model_namespace::log_prob";
(void) function__;  // suppress unused var warning

    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      local_scalar_t__ sigma;
      sigma = DUMMY_VAR__;
      
      current_statement__ = 1;
      sigma = in__.scalar();
      current_statement__ = 1;
      if (jacobian__) {
        current_statement__ = 1;
        sigma = stan::math::lb_constrain(sigma, 0, lp__);
      } else {
        current_statement__ = 1;
        sigma = stan::math::lb_constrain(sigma, 0);
      }
      local_scalar_t__ sigma_a;
      sigma_a = DUMMY_VAR__;
      
      current_statement__ = 2;
      sigma_a = in__.scalar();
      current_statement__ = 2;
      if (jacobian__) {
        current_statement__ = 2;
        sigma_a = stan::math::lb_constrain(sigma_a, 0, lp__);
      } else {
        current_statement__ = 2;
        sigma_a = stan::math::lb_constrain(sigma_a, 0);
      }
      local_scalar_t__ sigma_b;
      sigma_b = DUMMY_VAR__;
      
      current_statement__ = 3;
      sigma_b = in__.scalar();
      current_statement__ = 3;
      if (jacobian__) {
        current_statement__ = 3;
        sigma_b = stan::math::lb_constrain(sigma_b, 0, lp__);
      } else {
        current_statement__ = 3;
        sigma_b = stan::math::lb_constrain(sigma_b, 0);
      }
      Eigen::Matrix<local_scalar_t__, -1, 1> a;
      a = Eigen::Matrix<local_scalar_t__, -1, 1>(J);
      stan::math::fill(a, DUMMY_VAR__);
      
      current_statement__ = 4;
      a = in__.vector(J);
      Eigen::Matrix<local_scalar_t__, -1, 1> b;
      b = Eigen::Matrix<local_scalar_t__, -1, 1>(J);
      stan::math::fill(b, DUMMY_VAR__);
      
      current_statement__ = 5;
      b = in__.vector(J);
      local_scalar_t__ mu_a;
      mu_a = DUMMY_VAR__;
      
      current_statement__ = 6;
      mu_a = in__.scalar();
      local_scalar_t__ mu_b;
      mu_b = DUMMY_VAR__;
      
      current_statement__ = 7;
      mu_b = in__.scalar();
      Eigen::Matrix<local_scalar_t__, -1, 1> y_hat;
      y_hat = Eigen::Matrix<local_scalar_t__, -1, 1>(N);
      stan::math::fill(y_hat, DUMMY_VAR__);
      
      current_statement__ = 10;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 9;
        assign(y_hat, cons_list(index_uni(i), nil_index_list()),
          (a[(county[(i - 1)] - 1)] +
            (b[(county[(i - 1)] - 1)] * x[(i - 1)])),
          "assigning variable y_hat");}
      {
        current_statement__ = 16;
        lp_accum__.add(normal_lpdf<propto__>(mu_a, 0, 100));
        current_statement__ = 17;
        lp_accum__.add(normal_lpdf<propto__>(mu_b, 0, 100));
        current_statement__ = 18;
        lp_accum__.add(normal_lpdf<propto__>(a, mu_a, sigma_a));
        current_statement__ = 19;
        lp_accum__.add(normal_lpdf<propto__>(b, mu_b, sigma_b));
        current_statement__ = 20;
        lp_accum__.add(normal_lpdf<propto__>(y, y_hat, sigma));
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
    static const char* function__ = "radon_vary_inter_slope_17x461_new_model_namespace::write_array";
(void) function__;  // suppress unused var warning

    (void) function__;  // suppress unused var warning

    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning

    
    try {
      double sigma;
      sigma = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      sigma = in__.scalar();
      current_statement__ = 1;
      sigma = stan::math::lb_constrain(sigma, 0);
      double sigma_a;
      sigma_a = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sigma_a = in__.scalar();
      current_statement__ = 2;
      sigma_a = stan::math::lb_constrain(sigma_a, 0);
      double sigma_b;
      sigma_b = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 3;
      sigma_b = in__.scalar();
      current_statement__ = 3;
      sigma_b = stan::math::lb_constrain(sigma_b, 0);
      Eigen::Matrix<double, -1, 1> a;
      a = Eigen::Matrix<double, -1, 1>(J);
      stan::math::fill(a, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 4;
      a = in__.vector(J);
      Eigen::Matrix<double, -1, 1> b;
      b = Eigen::Matrix<double, -1, 1>(J);
      stan::math::fill(b, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 5;
      b = in__.vector(J);
      double mu_a;
      mu_a = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 6;
      mu_a = in__.scalar();
      double mu_b;
      mu_b = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 7;
      mu_b = in__.scalar();
      Eigen::Matrix<double, -1, 1> y_hat;
      y_hat = Eigen::Matrix<double, -1, 1>(N);
      stan::math::fill(y_hat, std::numeric_limits<double>::quiet_NaN());
      
      vars__.emplace_back(sigma);
      vars__.emplace_back(sigma_a);
      vars__.emplace_back(sigma_b);
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        vars__.emplace_back(a[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        vars__.emplace_back(b[(sym1__ - 1)]);}
      vars__.emplace_back(mu_a);
      vars__.emplace_back(mu_b);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 10;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 9;
        assign(y_hat, cons_list(index_uni(i), nil_index_list()),
          (a[(county[(i - 1)] - 1)] +
            (b[(county[(i - 1)] - 1)] * x[(i - 1)])),
          "assigning variable y_hat");}
      if (emit_transformed_parameters__) {
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          vars__.emplace_back(y_hat[(sym1__ - 1)]);}
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double lik;
      lik = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 12;
      lik = 0;
      current_statement__ = 15;
      for (int observe_i = 1; observe_i <= N; ++observe_i) {
        current_statement__ = 13;
        lik = (lik +
                normal_lpdf<false>(z_test[(observe_i - 1)],
                  y_hat[(observe_i - 1)], sigma));}
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
      double sigma;
      sigma = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      sigma = context__.vals_r("sigma")[(1 - 1)];
      double sigma_free__;
      sigma_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      sigma_free__ = stan::math::lb_free(sigma, 0);
      double sigma_a;
      sigma_a = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sigma_a = context__.vals_r("sigma_a")[(1 - 1)];
      double sigma_a_free__;
      sigma_a_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sigma_a_free__ = stan::math::lb_free(sigma_a, 0);
      double sigma_b;
      sigma_b = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 3;
      sigma_b = context__.vals_r("sigma_b")[(1 - 1)];
      double sigma_b_free__;
      sigma_b_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 3;
      sigma_b_free__ = stan::math::lb_free(sigma_b, 0);
      Eigen::Matrix<double, -1, 1> a;
      a = Eigen::Matrix<double, -1, 1>(J);
      stan::math::fill(a, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> a_flat__;
        current_statement__ = 4;
        assign(a_flat__, nil_index_list(), context__.vals_r("a"),
          "assigning variable a_flat__");
        current_statement__ = 4;
        pos__ = 1;
        current_statement__ = 4;
        for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
          current_statement__ = 4;
          assign(a, cons_list(index_uni(sym1__), nil_index_list()),
            a_flat__[(pos__ - 1)], "assigning variable a");
          current_statement__ = 4;
          pos__ = (pos__ + 1);}
      }
      Eigen::Matrix<double, -1, 1> b;
      b = Eigen::Matrix<double, -1, 1>(J);
      stan::math::fill(b, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> b_flat__;
        current_statement__ = 5;
        assign(b_flat__, nil_index_list(), context__.vals_r("b"),
          "assigning variable b_flat__");
        current_statement__ = 5;
        pos__ = 1;
        current_statement__ = 5;
        for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
          current_statement__ = 5;
          assign(b, cons_list(index_uni(sym1__), nil_index_list()),
            b_flat__[(pos__ - 1)], "assigning variable b");
          current_statement__ = 5;
          pos__ = (pos__ + 1);}
      }
      double mu_a;
      mu_a = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 6;
      mu_a = context__.vals_r("mu_a")[(1 - 1)];
      double mu_b;
      mu_b = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 7;
      mu_b = context__.vals_r("mu_b")[(1 - 1)];
      vars__.emplace_back(sigma_free__);
      vars__.emplace_back(sigma_a_free__);
      vars__.emplace_back(sigma_b_free__);
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        vars__.emplace_back(a[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        vars__.emplace_back(b[(sym1__ - 1)]);}
      vars__.emplace_back(mu_a);
      vars__.emplace_back(mu_b);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("sigma");
    names__.emplace_back("sigma_a");
    names__.emplace_back("sigma_b");
    names__.emplace_back("a");
    names__.emplace_back("b");
    names__.emplace_back("mu_a");
    names__.emplace_back("mu_b");
    names__.emplace_back("y_hat");
    names__.emplace_back("lik");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(J)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(J)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "sigma_a");
    param_names__.emplace_back(std::string() + "sigma_b");
    for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "a" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "b" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "mu_a");
    param_names__.emplace_back(std::string() + "mu_b");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym1__));
        }}
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
    
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "sigma_a");
    param_names__.emplace_back(std::string() + "sigma_b");
    for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "a" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "b" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "mu_a");
    param_names__.emplace_back(std::string() + "mu_b");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym1__));
        }}
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "lik");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"vector\",\"length\":" << J << "},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"vector\",\"length\":" << J << "},\"block\":\"parameters\"},{\"name\":\"mu_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"vector\",\"length\":" << N << "},\"block\":\"transformed_parameters\"},{\"name\":\"lik\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"a\",\"type\":{\"name\":\"vector\",\"length\":" << J << "},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"vector\",\"length\":" << J << "},\"block\":\"parameters\"},{\"name\":\"mu_a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu_b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"vector\",\"length\":" << N << "},\"block\":\"transformed_parameters\"},{\"name\":\"lik\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
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

using stan_model = radon_vary_inter_slope_17x461_new_model_namespace::radon_vary_inter_slope_17x461_new_model;

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
  return radon_vary_inter_slope_17x461_new_model_namespace::profiles__;
}

#endif


