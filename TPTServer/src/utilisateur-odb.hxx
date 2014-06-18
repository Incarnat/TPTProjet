// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef UTILISATEUR_ODB_HXX
#define UTILISATEUR_ODB_HXX

#include <odb/version.hxx>

#if (ODB_VERSION != 20300UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "utilisateur.h"

#include <memory>
#include <cstddef>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/callback.hxx>
#include <odb/wrapper-traits.hxx>
#include <odb/pointer-traits.hxx>
#include <odb/container-traits.hxx>
#include <odb/no-op-cache-traits.hxx>
#include <odb/result.hxx>
#include <odb/simple-object-result.hxx>

#include <odb/details/unused.hxx>
#include <odb/details/shared-ptr.hxx>

namespace odb
{
  // Utilisateur
  //
  template <>
  struct class_traits< ::Utilisateur >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::Utilisateur >
  {
    public:
    typedef ::Utilisateur object_type;
    typedef ::Utilisateur* pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef int id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    no_op_pointer_cache_traits<pointer_type>
    pointer_cache_traits;

    typedef
    no_op_reference_cache_traits<object_type>
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };
}

#include <odb/details/buffer.hxx>

#include <odb/mysql/version.hxx>
#include <odb/mysql/forward.hxx>
#include <odb/mysql/binding.hxx>
#include <odb/mysql/mysql-types.hxx>
#include <odb/mysql/query.hxx>

namespace odb
{
  // Utilisateur
  //
  template <typename A>
  struct query_columns< ::Utilisateur, id_mysql, A >
  {
    // id
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        int,
        mysql::id_long >::query_type,
      mysql::id_long >
    id_type_;

    static const id_type_ id;

    // type
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    type_type_;

    static const type_type_ type;

    // marqueMachine
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    marqueMachine_type_;

    static const marqueMachine_type_ marqueMachine;
  };

  template <typename A>
  const typename query_columns< ::Utilisateur, id_mysql, A >::id_type_
  query_columns< ::Utilisateur, id_mysql, A >::
  id (A::table_name, "`id`", 0);

  template <typename A>
  const typename query_columns< ::Utilisateur, id_mysql, A >::type_type_
  query_columns< ::Utilisateur, id_mysql, A >::
  type (A::table_name, "`type`", 0);

  template <typename A>
  const typename query_columns< ::Utilisateur, id_mysql, A >::marqueMachine_type_
  query_columns< ::Utilisateur, id_mysql, A >::
  marqueMachine (A::table_name, "`marqueMachine`", 0);

  template <typename A>
  struct pointer_query_columns< ::Utilisateur, id_mysql, A >:
    query_columns< ::Utilisateur, id_mysql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::Utilisateur, id_mysql >:
    public access::object_traits< ::Utilisateur >
  {
    public:
    struct id_image_type
    {
      int id_value;
      my_bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // id
      //
      int id_value;
      my_bool id_null;

      // type
      //
      details::buffer type_value;
      unsigned long type_size;
      my_bool type_null;

      // marqueMachine
      //
      details::buffer marqueMachine_value;
      unsigned long marqueMachine_size;
      my_bool marqueMachine_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          my_bool*);

    static void
    bind (MYSQL_BIND*,
          image_type&,
          mysql::statement_kind);

    static void
    bind (MYSQL_BIND*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          mysql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef mysql::object_statements<object_type> statements_type;

    typedef mysql::query_base query_base_type;

    static const std::size_t column_count = 3UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  template <>
  class access::object_traits_impl< ::Utilisateur, id_common >:
    public access::object_traits_impl< ::Utilisateur, id_mysql >
  {
  };

  // Utilisateur
  //
}

#include "utilisateur-odb.ixx"

#include <odb/post.hxx>

#endif // UTILISATEUR_ODB_HXX
