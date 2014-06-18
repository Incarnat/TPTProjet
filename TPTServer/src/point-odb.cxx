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
          int,
          mysql::id_long >::set_value (
        id,
        i.idPoint_value,
        i.idPoint_null);
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

    // idPoint
    //
    t[0UL] = 0;

    // idMove
    //
    t[1UL] = 0;

    // timestamps
    //
    t[2UL] = 0;

    // X
    //
    t[3UL] = 0;

    // Y
    //
    t[4UL] = 0;

    // relatifX
    //
    t[5UL] = 0;

    // relatifY
    //
    t[6UL] = 0;

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

    // idPoint
    //
    if (sk != statement_update)
    {
      b[n].buffer_type = MYSQL_TYPE_LONG;
      b[n].is_unsigned = 0;
      b[n].buffer = &i.idPoint_value;
      b[n].is_null = &i.idPoint_null;
      n++;
    }

    // idMove
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.idMove_value;
    b[n].is_null = &i.idMove_null;
    n++;

    // timestamps
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.timestamps_value;
    b[n].is_null = &i.timestamps_null;
    n++;

    // X
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.X_value;
    b[n].is_null = &i.X_null;
    n++;

    // Y
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.Y_value;
    b[n].is_null = &i.Y_null;
    n++;

    // relatifX
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.relatifX_value;
    b[n].is_null = &i.relatifX_null;
    n++;

    // relatifY
    //
    b[n].buffer_type = MYSQL_TYPE_DOUBLE;
    b[n].buffer = &i.relatifY_value;
    b[n].is_null = &i.relatifY_null;
    n++;
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  bind (MYSQL_BIND* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
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

    // idPoint
    //
    if (sk == statement_insert)
    {
      int const& v =
        o.idPoint;

      bool is_null (false);
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.idPoint_value, is_null, v);
      i.idPoint_null = is_null;
    }

    // idMove
    //
    {
      int const& v =
        o.idMove;

      bool is_null (false);
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.idMove_value, is_null, v);
      i.idMove_null = is_null;
    }

    // timestamps
    //
    {
      double const& v =
        o.timestamps;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.timestamps_value, is_null, v);
      i.timestamps_null = is_null;
    }

    // X
    //
    {
      double const& v =
        o.X;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.X_value, is_null, v);
      i.X_null = is_null;
    }

    // Y
    //
    {
      double const& v =
        o.Y;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.Y_value, is_null, v);
      i.Y_null = is_null;
    }

    // relatifX
    //
    {
      double const& v =
        o.relatifX;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.relatifX_value, is_null, v);
      i.relatifX_null = is_null;
    }

    // relatifY
    //
    {
      double const& v =
        o.relatifY;

      bool is_null (false);
      mysql::value_traits<
          double,
          mysql::id_double >::set_image (
        i.relatifY_value, is_null, v);
      i.relatifY_null = is_null;
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

    // idPoint
    //
    {
      int& v =
        o.idPoint;

      mysql::value_traits<
          int,
          mysql::id_long >::set_value (
        v,
        i.idPoint_value,
        i.idPoint_null);
    }

    // idMove
    //
    {
      int& v =
        o.idMove;

      mysql::value_traits<
          int,
          mysql::id_long >::set_value (
        v,
        i.idMove_value,
        i.idMove_null);
    }

    // timestamps
    //
    {
      double& v =
        o.timestamps;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.timestamps_value,
        i.timestamps_null);
    }

    // X
    //
    {
      double& v =
        o.X;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.X_value,
        i.X_null);
    }

    // Y
    //
    {
      double& v =
        o.Y;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.Y_value,
        i.Y_null);
    }

    // relatifX
    //
    {
      double& v =
        o.relatifX;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.relatifX_value,
        i.relatifX_null);
    }

    // relatifY
    //
    {
      double& v =
        o.relatifY;

      mysql::value_traits<
          double,
          mysql::id_double >::set_value (
        v,
        i.relatifY_value,
        i.relatifY_null);
    }
  }

  void access::object_traits_impl< ::Point, id_mysql >::
  init (id_image_type& i, const id_type& id)
  {
    {
      bool is_null (false);
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.id_value, is_null, id);
      i.id_null = is_null;
    }
  }

  const char access::object_traits_impl< ::Point, id_mysql >::persist_statement[] =
  "INSERT INTO `Point` "
  "(`idPoint`, "
  "`idMove`, "
  "`timestamps`, "
  "`X`, "
  "`Y`, "
  "`relatifX`, "
  "`relatifY`) "
  "VALUES "
  "(?, ?, ?, ?, ?, ?, ?)";

  const char access::object_traits_impl< ::Point, id_mysql >::find_statement[] =
  "SELECT "
  "`Point`.`idPoint`, "
  "`Point`.`idMove`, "
  "`Point`.`timestamps`, "
  "`Point`.`X`, "
  "`Point`.`Y`, "
  "`Point`.`relatifX`, "
  "`Point`.`relatifY` "
  "FROM `Point` "
  "WHERE `Point`.`idPoint`=?";

  const char access::object_traits_impl< ::Point, id_mysql >::update_statement[] =
  "UPDATE `Point` "
  "SET "
  "`idMove`=?, "
  "`timestamps`=?, "
  "`X`=?, "
  "`Y`=?, "
  "`relatifX`=?, "
  "`relatifY`=? "
  "WHERE `idPoint`=?";

  const char access::object_traits_impl< ::Point, id_mysql >::erase_statement[] =
  "DELETE FROM `Point` "
  "WHERE `idPoint`=?";

  const char access::object_traits_impl< ::Point, id_mysql >::query_statement[] =
  "SELECT "
  "`Point`.`idPoint`, "
  "`Point`.`idMove`, "
  "`Point`.`timestamps`, "
  "`Point`.`X`, "
  "`Point`.`Y`, "
  "`Point`.`relatifX`, "
  "`Point`.`relatifY` "
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

    im.idPoint_value = 0;

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

    obj.idPoint = static_cast< id_type > (st.id ());

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
      obj.idPoint);
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
      obj.idPoint);

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
