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

#include "oadrService.hxx"

#include "oadrServiceNameType.hxx"

#include "oadrInfo.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrService
    // 

    const oadrService::oadrServiceName_type& oadrService::
    oadrServiceName () const
    {
      return this->oadrServiceName_.get ();
    }

    oadrService::oadrServiceName_type& oadrService::
    oadrServiceName ()
    {
      return this->oadrServiceName_.get ();
    }

    void oadrService::
    oadrServiceName (const oadrServiceName_type& x)
    {
      this->oadrServiceName_.set (x);
    }

    void oadrService::
    oadrServiceName (::std::auto_ptr< oadrServiceName_type > x)
    {
      this->oadrServiceName_.set (x);
    }

    const oadrService::oadrInfo_sequence& oadrService::
    oadrInfo () const
    {
      return this->oadrInfo_;
    }

    oadrService::oadrInfo_sequence& oadrService::
    oadrInfo ()
    {
      return this->oadrInfo_;
    }

    void oadrService::
    oadrInfo (const oadrInfo_sequence& s)
    {
      this->oadrInfo_ = s;
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
    // oadrService
    //

    oadrService::
    oadrService (const oadrServiceName_type& oadrServiceName)
    : ::xml_schema::type (),
      oadrServiceName_ (oadrServiceName, this),
      oadrInfo_ (this)
    {
    }

    oadrService::
    oadrService (::std::auto_ptr< oadrServiceName_type > oadrServiceName)
    : ::xml_schema::type (),
      oadrServiceName_ (oadrServiceName, this),
      oadrInfo_ (this)
    {
    }

    oadrService::
    oadrService (const oadrService& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrServiceName_ (x.oadrServiceName_, f, this),
      oadrInfo_ (x.oadrInfo_, f, this)
    {
    }

    oadrService::
    oadrService (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrServiceName_ (this),
      oadrInfo_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void oadrService::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrServiceName
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "oadrServiceName",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< oadrServiceName_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!oadrServiceName_.present ())
            {
              ::std::auto_ptr< oadrServiceName_type > r (
                dynamic_cast< oadrServiceName_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->oadrServiceName_.set (r);
              continue;
            }
          }
        }

        // oadrInfo
        //
        if (n.name () == "oadrInfo" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::auto_ptr< oadrInfo_type > r (
            oadrInfo_traits::create (i, f, this));

          this->oadrInfo_.push_back (r);
          continue;
        }

        break;
      }

      if (!oadrServiceName_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrServiceName",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrService* oadrService::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrService (*this, f, c);
    }

    oadrService& oadrService::
    operator= (const oadrService& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrServiceName_ = x.oadrServiceName_;
        this->oadrInfo_ = x.oadrInfo_;
      }

      return *this;
    }

    oadrService::
    ~oadrService ()
    {
    }
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
    operator<< (::xercesc::DOMElement& e, const oadrService& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrServiceName
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrService::oadrServiceName_type& x (i.oadrServiceName ());
        if (typeid (oadrService::oadrServiceName_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "oadrServiceName",
              "http://openadr.org/oadr-2.0b/2012/07",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "oadrServiceName",
            "http://openadr.org/oadr-2.0b/2012/07",
            true, true, e, x);
      }

      // oadrInfo
      //
      for (oadrService::oadrInfo_const_iterator
           b (i.oadrInfo ().begin ()), n (i.oadrInfo ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrInfo",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *b;
      }
    }
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

