// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "point-odb.hxx"

#include <cassert>
#include <cstring>  // std::memcpy


#include <odb/mysql/traits.hxx>
#include <odb/mysql/database.hxx>
#include <odb/mysql/transaction.hxx>
#include <odb/mysql/connection.hxx>
#include <odb/mysql/statement.hxx>
#include <odb/mysql/statement-cache.hxx>
#include <odb/mysql/simple-object-statements.hxx>
#include <odb/mysql/container-statements.hxx>
#include <odb/mysql/exceptions.hxx>
#include <odb/mysql/simple-object-result.hxx>
#include <odb/mysql/enum.hxx>

namespace odb
{
  // Point
  //

  struct access::object_traits_impl< ::Point, id_mysql >::extra_statement_cache_type
  {
    extra_statement_cache_type (
      mysql::connection&,
      image_type&,
      mysql::binding&,
      mysql::binding&)
    {
    }
  };

  access::object_traits_impl< ::Point, id_mysql >::id_type
  access::object_traits_impl< ::Point, id_mysql >::
  id (const image_type& i)
  {
    mysql::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      mysql::value_traits<
          long unsigned int,
          mysql::id_ulonglong >::set_value (
        id,
        i.ID_value,
        i.ID_null);
    }

    return id;
  }

  bool access::object_traits_impl< ::Point, id_mysql >::
  grow (image_type& i,
        my_bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // ID
    //
    t[0UL] = 0;

    // ID_mouvement
    //
    t[1UL] = 0;

    // X
    //
    t[2UL] = 0;

    // Y
    //
    t[3UL] = 0;

    // X_relatif
    //
    t[4UL] = 0;

    // Y_relatif
    //
    t[5UL] = 0;

    return grew;
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  bind (MYSQL_BIND* b,
        image_type& i,
        mysql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace mysql;

    std::size_t n (0);

    // ID
    //
    if (sk != statement_update)
    {
      b[n].buffer_type = MYSQL_TYPE_LONGLONG;
      b[n].is_unsigned = 1;
      b[n].buffer = &i.ID_value;
      b[n].is_null = &i.ID_null;
      n++;
    }

    // ID_mouvement
    //
    b[n].buffer_type = MYSQL_TYPE_LONGLONG;
    b[n].is_unsigned = 1;
    b[n].buffer = &i.ID_mouvement_value;
    b[n].is_null = &i.ID_mouvement_null;
    n++;

    // X
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.X_value;
    b[n].is_null = &i.X_null;
    n++;

    // Y
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.Y_value;
    b[n].is_null = &i.Y_null;
    n++;

    // X_relatif
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.X_relatif_value;
    b[n].is_null = &i.X_relatif_null;
    n++;

    // Y_relatif
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.Y_relatif_value;
    b[n].is_null = &i.Y_relatif_null;
    n++;
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  bind (MYSQL_BIND* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].buffer_type = MYSQL_TYPE_LONGLONG;
    b[n].is_unsigned = 1;
    b[n].buffer = &i.id_value;
    b[n].is_null = &i.id_null;
  }

  bool access::object_traits_impl< ::Point, id_mysql >::
  init (image_type& i,
        const object_type& o,
        mysql::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace mysql;

    bool grew (false);

    // ID
    //
    if (sk == statement_insert)
    {
      long unsigned int const& v =
        o.ID;

      bool is_null (false);
      mysql::value_traits<
          long unsigned int,
          mysql::id_ulonglong >::set_image (
        i.ID_value, is_null, v);
      i.ID_null = is_null;
    }

    // ID_mouvement
    //
    {
      long unsigned int const& v =
        o.ID_mouvement;

      bool is_null (false);
      mysql::value_traits<
          long unsigned int,
          mysql::id_ulonglong >::set_image (
        i.ID_mouvement_value, is_null, v);
      i.ID_mouvement_null = is_null;
    }

    // X
    //
    {
      int const& v =
        o.X;

      bool is_null (false);
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.X_value, is_null, v);
      i.X_null = is_null;
    }

    // Y
    //
    {
      int const& v =
        o.Y;

      bool is_null (false);
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.Y_value, is_null, v);
      i.Y_null = is_null;
    }

    // X_relatif
    //
    {
      double const& v =
        o.X_relatif;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.X_relatif_value, is_null, v);
      i.X_relatif_null = is_null;
    }

    // Y_relatif
    //
    {
      double const& v =
        o.Y_relatif;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.Y_relatif_value, is_null, v);
      i.Y_relatif_null = is_null;
    }

    return grew;
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // ID
    //
    {
      long unsigned int& v =
        o.ID;

      mysql::value_traits<
          long unsigned int,
          mysql::id_ulonglong >::set_value (
        v,
        i.ID_value,
        i.ID_null);
    }

    // ID_mouvement
    //
    {
      long unsigned int& v =
        o.ID_mouvement;

      mysql::value_traits<
          long unsigned int,
          mysql::id_ulonglong >::set_value (
        v,
        i.ID_mouvement_value,
        i.ID_mouvement_null);
    }

    // X
    //
    {
      int& v =
        o.X;

      mysql::value_traits<
          int,
          mysql::id_long >::set_value (
        v,
        i.X_value,
        i.X_null);
    }

    // Y
    //
    {
      int& v =
        o.Y;

      mysql::value_traits<
          int,
          mysql::id_long >::set_value (
        v,
        i.Y_value,
        i.Y_null);
    }

    // X_relatif
    //
    {
      double& v =
        o.X_relatif;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.X_relatif_value,
        i.X_relatif_null);
    }

    // Y_relatif
    //
    {
      double& v =
        o.Y_relatif;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.Y_relatif_value,
        i.Y_relatif_null);
    }
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  init (id_image_type& i, const id_type& id)
  {
    {
      bool is_null (false);
      mysql::value_traits<
          long unsigned int,
          mysql::id_ulonglong >::set_image (
        i.id_value, is_null, id);
      i.id_null = is_null;
    }
  }

  const char access::object_traits_impl< ::Point, id_mysql >::persist_statement[] =
  "INSERT INTO `Point` "
  "(`ID`, "
  "`ID_mouvement`, "
  "`X`, "
  "`Y`, "
  "`X_relatif`, "
  "`Y_relatif`) "
  "VALUES "
  "(?, ?, ?, ?, ?, ?)";

  const char access::object_traits_impl< ::Point, id_mysql >::find_statement[] =
  "SELECT "
  "`Point`.`ID`, "
  "`Point`.`ID_mouvement`, "
  "`Point`.`X`, "
  "`Point`.`Y`, "
  "`Point`.`X_relatif`, "
  "`Point`.`Y_relatif` "
  "FROM `Point` "
  "WHERE `Point`.`ID`=?";

  const char access::object_traits_impl< ::Point, id_mysql >::update_statement[] =
  "UPDATE `Point` "
  "SET "
  "`ID_mouvement`=?, "
  "`X`=?, "
  "`Y`=?, "
  "`X_relatif`=?, "
  "`Y_relatif`=? "
  "WHERE `ID`=?";

  const char access::object_traits_impl< ::Point, id_mysql >::erase_statement[] =
  "DELETE FROM `Point` "
  "WHERE `ID`=?";

  const char access::object_traits_impl< ::Point, id_mysql >::query_statement[] =
  "SELECT "
  "`Point`.`ID`, "
  "`Point`.`ID_mouvement`, "
  "`Point`.`X`, "
  "`Point`.`Y`, "
  "`Point`.`X_relatif`, "
  "`Point`.`Y_relatif` "
  "FROM `Point`";

  const char access::object_traits_impl< ::Point, id_mysql >::erase_query_statement[] =
  "DELETE FROM `Point`";

  const char access::object_traits_impl< ::Point, id_mysql >::table_name[] =
  "`Point`";

  void access::object_traits_impl< ::Point, id_mysql >::
  persist (database& db, object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace mysql;

    mysql::connection& conn (
      mysql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    callback (db,
              static_cast<const object_type&> (obj),
              callback_event::pre_persist);

    image_type& im (sts.image ());
    binding& imb (sts.insert_image_binding ());

    if (init (im, obj, statement_insert))
      im.version++;

    im.ID_value = 0;

    if (im.version != sts.insert_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_insert);
      sts.insert_image_version (im.version);
      imb.version++;
    }

    insert_statement& st (sts.persist_statement ());
    if (!st.execute ())
      throw object_already_persistent ();

    obj.ID = static_cast< id_type > (st.id ());

    callback (db,
              static_cast<const object_type&> (obj),
              callback_event::post_persist);
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  update (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace mysql;
    using mysql::update_statement;

    callback (db, obj, callback_event::pre_update);

    mysql::transaction& tr (mysql::transaction::current ());
    mysql::connection& conn (tr.connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    const id_type& id (
      obj.ID);
    id_image_type& idi (sts.id_image ());
    init (idi, id);

    image_type& im (sts.image ());
    if (init (im, obj, statement_update))
      im.version++;

    bool u (false);
    binding& imb (sts.update_image_binding ());
    if (im.version != sts.update_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_update);
      sts.update_image_version (im.version);
      imb.version++;
      u = true;
    }

    binding& idb (sts.id_image_binding ());
    if (idi.version != sts.update_id_image_version () ||
        idb.version == 0)
    {
      if (idi.version != sts.id_image_version () ||
          idb.version == 0)
      {
        bind (idb.bind, idi);
        sts.id_image_version (idi.version);
        idb.version++;
      }

      sts.update_id_image_version (idi.version);

      if (!u)
        imb.version++;
    }

    update_statement& st (sts.update_statement ());
    if (st.execute () == 0)
      throw object_not_persistent ();

    callback (db, obj, callback_event::post_update);
    pointer_cache_traits::update (db, obj);
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  erase (database& db, const id_type& id)
  {
    using namespace mysql;

    ODB_POTENTIALLY_UNUSED (db);

    mysql::connection& conn (
      mysql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();

    pointer_cache_traits::erase (db, id);
  }

  access::object_traits_impl< ::Point, id_mysql >::pointer_type
  access::object_traits_impl< ::Point, id_mysql >::
  find (database& db, const id_type& id)
  {
    using namespace mysql;

    {
      pointer_type p (pointer_cache_traits::find (db, id));

      if (!pointer_traits::null_ptr (p))
        return p;
    }

    mysql::connection& conn (
      mysql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, &id))
        return pointer_type ();
    }

    pointer_type p (
      access::object_factory<object_type, pointer_type>::create ());
    pointer_traits::guard pg (p);

    pointer_cache_traits::insert_guard ig (
      pointer_cache_traits::insert (db, id, p));

    object_type& obj (pointer_traits::get_ref (p));

    if (l.locked ())
    {
      select_statement& st (sts.find_statement ());
      ODB_POTENTIALLY_UNUSED (st);

      callback (db, obj, callback_event::pre_load);
      init (obj, sts.image (), &db);
      load_ (sts, obj, false);
      sts.load_delayed (0);
      l.unlock ();
      callback (db, obj, callback_event::post_load);
      pointer_cache_traits::load (ig.position ());
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    pg.release ();
    return p;
  }

  bool access::object_traits_impl< ::Point, id_mysql >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace mysql;

    mysql::connection& conn (
      mysql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    reference_cache_traits::position_type pos (
      reference_cache_traits::insert (db, id, obj));
    reference_cache_traits::insert_guard ig (pos);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, false);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    reference_cache_traits::load (pos);
    ig.release ();
    return true;
  }

  bool access::object_traits_impl< ::Point, id_mysql >::
  reload (database& db, object_type& obj)
  {
    using namespace mysql;

    mysql::connection& conn (
      mysql::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.ID);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, true);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    return true;
  }

  bool access::object_traits_impl< ::Point, id_mysql >::
  find_ (statements_type& sts,
         const id_type* id)
  {
    using namespace mysql;

    id_image_type& i (sts.id_image ());
    init (i, *id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    select_statement& st (sts.find_statement ());

    st.execute ();
    auto_result ar (st);
    select_statement::result r (st.fetch ());

    return r != select_statement::no_data;
  }

  result< access::object_traits_impl< ::Point, id_mysql >::object_type >
  access::object_traits_impl< ::Point, id_mysql >::
  query (database&, const query_base_type& q)
  {
    using namespace mysql;
    using odb::details::shared;
    using odb::details::shared_ptr;

    mysql::connection& conn (
      mysql::transaction::current ().connection ());

    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    std::string text (query_statement);
    if (!q.empty ())
    {
      text += " ";
      text += q.clause ();
    }

    q.init_parameters ();
    shared_ptr<select_statement> st (
      new (shared) select_statement (
        conn,
        text,
        false,
        true,
        q.parameters_binding (),
        imb));

    st->execute ();

    shared_ptr< odb::object_result_impl<object_type> > r (
      new (shared) mysql::object_result_impl<object_type> (
        q, st, sts, 0));

    return result<object_type> (r);
  }

  unsigned long long access::object_traits_impl< ::Point, id_mysql >::
  erase_query (database&, const query_base_type& q)
  {
    using namespace mysql;

    mysql::connection& conn (
      mysql::transaction::current ().connection ());

    std::string text (erase_query_statement);
    if (!q.empty ())
    {
      text += ' ';
      text += q.clause ();
    }

    q.init_parameters ();
    delete_statement st (
      conn,
      text,
      q.parameters_binding ());

    return st.execute ();
  }
}

#include <odb/post.hxx>
