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

#include "oadrCreatedOptType.hxx"

#include "EiResponseType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCreatedOptType
    // 

    const oadrCreatedOptType::eiResponse_type& oadrCreatedOptType::
    eiResponse () const
    {
      return this->eiResponse_.get ();
    }

    oadrCreatedOptType::eiResponse_type& oadrCreatedOptType::
    eiResponse ()
    {
      return this->eiResponse_.get ();
    }

    void oadrCreatedOptType::
    eiResponse (const eiResponse_type& x)
    {
      this->eiResponse_.set (x);
    }

    void oadrCreatedOptType::
    eiResponse (::std::auto_ptr< eiResponse_type > x)
    {
      this->eiResponse_.set (x);
    }

    const oadrCreatedOptType::optID_type& oadrCreatedOptType::
    optID () const
    {
      return this->optID_.get ();
    }

    oadrCreatedOptType::optID_type& oadrCreatedOptType::
    optID ()
    {
      return this->optID_.get ();
    }

    void oadrCreatedOptType::
    optID (const optID_type& x)
    {
      this->optID_.set (x);
    }

    void oadrCreatedOptType::
    optID (::std::auto_ptr< optID_type > x)
    {
      this->optID_.set (x);
    }

    const oadrCreatedOptType::schemaVersion_optional& oadrCreatedOptType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCreatedOptType::schemaVersion_optional& oadrCreatedOptType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCreatedOptType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCreatedOptType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCreatedOptType::
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
    // oadrCreatedOptType
    //

    oadrCreatedOptType::
    oadrCreatedOptType (const eiResponse_type& eiResponse,
                        const optID_type& optID)
    : ::xml_schema::type (),
      eiResponse_ (eiResponse, this),
      optID_ (optID, this),
      schemaVersion_ (this)
    {
    }

    oadrCreatedOptType::
    oadrCreatedOptType (::std::auto_ptr< eiResponse_type > eiResponse,
                        const optID_type& optID)
    : ::xml_schema::type (),
      eiResponse_ (eiResponse, this),
      optID_ (optID, this),
      schemaVersion_ (this)
    {
    }

    oadrCreatedOptType::
    oadrCreatedOptType (::std::auto_ptr< eiResponse_type > eiResponse,
                        ::std::auto_ptr< optID_type > optID)
    : ::xml_schema::type (),
      eiResponse_ (eiResponse, this),
      optID_ (optID, this),
      schemaVersion_ (this)
    {
    }

    oadrCreatedOptType::
    oadrCreatedOptType (const oadrCreatedOptType& x,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      eiResponse_ (x.eiResponse_, f, this),
      optID_ (x.optID_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCreatedOptType::
    oadrCreatedOptType (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      eiResponse_ (this),
      optID_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void oadrCreatedOptType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // eiResponse
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "eiResponse",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< eiResponse_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!eiResponse_.present ())
            {
              ::std::auto_ptr< eiResponse_type > r (
                dynamic_cast< eiResponse_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->eiResponse_.set (r);
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

        break;
      }

      if (!eiResponse_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "eiResponse",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!optID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "optID",
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

    oadrCreatedOptType* oadrCreatedOptType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrCreatedOptType (*this, f, c);
    }

    oadrCreatedOptType& oadrCreatedOptType::
    operator= (const oadrCreatedOptType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->eiResponse_ = x.eiResponse_;
        this->optID_ = x.optID_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCreatedOptType::
    ~oadrCreatedOptType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrCreatedOptType >
    _xsd_oadrCreatedOptType_type_factory_init (
      "oadrCreatedOptType",
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
    operator<< (::xercesc::DOMElement& e, const oadrCreatedOptType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // eiResponse
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCreatedOptType::eiResponse_type& x (i.eiResponse ());
        if (typeid (oadrCreatedOptType::eiResponse_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "eiResponse",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "eiResponse",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }

      // optID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrCreatedOptType::optID_type& x (i.optID ());
        if (typeid (oadrCreatedOptType::optID_type) == typeid (x))
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
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrCreatedOptType >
    _xsd_oadrCreatedOptType_type_serializer_init (
      "oadrCreatedOptType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

