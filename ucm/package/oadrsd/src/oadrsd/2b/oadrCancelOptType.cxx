// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "oadrCancelOptType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCancelOptType
    // 

    const oadrCancelOptType::requestID_type& oadrCancelOptType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrCancelOptType::requestID_type& oadrCancelOptType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrCancelOptType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrCancelOptType::
    requestID (::std::auto_ptr< requestID_type > x)
    {
      this->requestID_.set (x);
    }

    const oadrCancelOptType::optID_type& oadrCancelOptType::
    optID () const
    {
      return this->optID_.get ();
    }

    oadrCancelOptType::optID_type& oadrCancelOptType::
    optID ()
    {
      return this->optID_.get ();
    }

    void oadrCancelOptType::
    optID (const optID_type& x)
    {
      this->optID_.set (x);
    }

    void oadrCancelOptType::
    optID (::std::auto_ptr< optID_type > x)
    {
      this->optID_.set (x);
    }

    const oadrCancelOptType::venID_type& oadrCancelOptType::
    venID () const
    {
      return this->venID_.get ();
    }

    oadrCancelOptType::venID_type& oadrCancelOptType::
    venID ()
    {
      return this->venID_.get ();
    }

    void oadrCancelOptType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrCancelOptType::
    venID (::std::auto_ptr< venID_type > x)
    {
      this->venID_.set (x);
    }

    const oadrCancelOptType::schemaVersion_optional& oadrCancelOptType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCancelOptType::schemaVersion_optional& oadrCancelOptType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCancelOptType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCancelOptType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCancelOptType::
    schemaVersion (::std::auto_ptr< schemaVersion_type > x)
    {
      this->schemaVersion_.set (x);
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace oadr2b
{
  namespace oadr
  {
    // oadrCancelOptType
    //

    oadrCancelOptType::
    oadrCancelOptType (const requestID_type& requestID,
                       const optID_type& optID,
                       const venID_type& venID)
    : ::xml_schema::type (),
      requestID_ (requestID, this),
      optID_ (optID, this),
      venID_ (venID, this),
      schemaVersion_ (this)
    {
    }

    oadrCancelOptType::
    oadrCancelOptType (::std::auto_ptr< requestID_type > requestID,
                       ::std::auto_ptr< optID_type > optID,
                       ::std::auto_ptr< venID_type > venID)
    : ::xml_schema::type (),
      requestID_ (requestID, this),
      optID_ (optID, this),
      venID_ (venID, this),
      schemaVersion_ (this)
    {
    }

    oadrCancelOptType::
    oadrCancelOptType (const oadrCancelOptType& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      requestID_ (x.requestID_, f, this),
      optID_ (x.optID_, f, this),
      venID_ (x.venID_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCancelOptType::
    oadrCancelOptType (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      requestID_ (this),
      optID_ (this),
      venID_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void oadrCancelOptType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // requestID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "requestID",
              "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
              &::xsd::cxx::tree::factory_impl< requestID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!requestID_.present ())
            {
              ::std::auto_ptr< requestID_type > r (
                dynamic_cast< requestID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->requestID_.set (r);
              continue;
            }
          }
        }

        // optID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "optID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< optID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!optID_.present ())
            {
              ::std::auto_ptr< optID_type > r (
                dynamic_cast< optID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->optID_.set (r);
              continue;
            }
          }
        }

        // venID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "venID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< venID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!venID_.present ())
            {
              ::std::auto_ptr< venID_type > r (
                dynamic_cast< venID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->venID_.set (r);
              continue;
            }
          }
        }

        break;
      }

      if (!requestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
      }

      if (!optID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "optID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!venID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "venID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "schemaVersion" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          this->schemaVersion_.set (schemaVersion_traits::create (i, f, this));
          continue;
        }
      }
    }

    oadrCancelOptType* oadrCancelOptType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrCancelOptType (*this, f, c);
    }

    oadrCancelOptType& oadrCancelOptType::
    operator= (const oadrCancelOptType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->requestID_ = x.requestID_;
        this->optID_ = x.optID_;
        this->venID_ = x.venID_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCancelOptType::
    ~oadrCancelOptType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrCancelOptType >
    _xsd_oadrCancelOptType_type_factory_init (
      "oadrCancelOptType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace oadr
  {
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace oadr2b
{
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const oadrCancelOptType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // requestID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCancelOptType::requestID_type& x (i.requestID ());
        if (typeid (oadrCancelOptType::requestID_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "requestID",
              "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "requestID",
            "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
            true, true, e, x);
      }

      // optID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCancelOptType::optID_type& x (i.optID ());
        if (typeid (oadrCancelOptType::optID_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "optID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "optID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }

      // venID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCancelOptType::venID_type& x (i.venID ());
        if (typeid (oadrCancelOptType::venID_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "venID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "venID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }

      // schemaVersion
      //
      if (i.schemaVersion ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "schemaVersion",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        a << *i.schemaVersion ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrCancelOptType >
    _xsd_oadrCancelOptType_type_serializer_init (
      "oadrCancelOptType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

