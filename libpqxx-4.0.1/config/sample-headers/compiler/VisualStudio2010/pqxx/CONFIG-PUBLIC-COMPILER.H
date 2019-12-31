#define PGSTD std
/* #define PQXX_BROKEN_ITERATOR 1 */
/* #define PQXX_BROKEN_USING_DECL 1 */
#define PQXX_HAVE_CHAR_TRAITS 1
#define PQXX_HAVE_CPP_PRAGMA_MESSAGE 1
/* #define PQXX_HAVE_CPP_WARNING 1 */
#define PQXX_HAVE_IOS 1
#define PQXX_HAVE_LIMITS 1
#define PQXX_HAVE_LONG_LONG 1
#define PQXX_HAVE_LONG_DOUBLE 1
#define PQXX_HAVE_REVERSE_ITERATOR 1
#define PQXX_HAVE_STREAMBUF 1
#define PQXX_PQ_IN_NAMESPACE 1
#define PQXX_HAVE_STRERROR_S 1
#define PQXXTR1 std
#define PQXX_HAVE_SHARED_PTR 1

#ifndef PQXX_MV_MODIFICATIONS
#define PQXX_MV_MODIFICATIONS

template <class Arg1, class Arg2, class Result>
struct PQXX_binary_function {
	typedef Arg1 first_argument_type;
	typedef Arg2 second_argument_type;
	typedef Result result_type;
};

template<class arg, class result>
struct PQXX_unary_function
{
	typedef arg argument_type;
	typedef result result_type;
};

#endif
