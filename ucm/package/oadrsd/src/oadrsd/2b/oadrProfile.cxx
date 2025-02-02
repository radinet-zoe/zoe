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

#include "oadrProfile.hxx"

#include "oadrProfileType.hxx"

#include "oadrTransports.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrProfile
    // 

    const oadrProfile::oadrProfileName_type& oadrProfile::
    oadrProfileName () const
    {
      return this->oadrProfileName_.get ();
    }

    oadrProfile::oadrProfileName_type& oadrProfile::
    oadrProfileName ()
    {
      return this->oadrProfileName_.get ();
    }

    void oadrProfile::
    oadrProfileName (const oadrProfileName_type& x)
    {
      this->oadrProfileName_.set (x);
    }

    void oadrProfile::
    oadrProfileName (::std::auto_ptr< oadrProfileName_type > x)
    {
      this->oadrProfileName_.set (x);
    }

    const oadrProfile::oadrTransports_type& oadrProfile::
    oadrTransports () const
    {
      return this->oadrTransports_.get ();
    }

    oadrProfile::oadrTransports_type& oadrProfile::
    oadrTransports ()
    {
      return this->oadrTransports_.get ();
    }

    void oadrProfile::
    oadrTransports (const oadrTransports_type& x)
    {
      this->oadrTransports_.set (x);
    }

    void oadrProfile::
    oadrTransports (::std::auto_ptr< oadrTransports_type > x)
    {
      this->oadrTransports_.set (x);
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
    // oadrProfile
    //

    oadrProfile::
    oadrProfile (const oadrProfileName_type& oadrProfileName,
                 const oadrTransports_type& oadrTransports)
    : ::xml_schema::type (),
      oadrProfileName_ (oadrProfileName, this),
      oadrTransports_ (oadrTransports, this)
    {
    }

    oadrProfile::
    oadrProfile (const oadrProfileName_type& oadrProfileName,
                 ::std::auto_ptr< oadrTransports_type > oadrTransports)
    : ::xml_schema::type (),
      oadrProfileName_ (oadrProfileName, this),
      oadrTransports_ (oadrTransports, this)
    {
    }

    oadrProfile::
    oadrProfile (::std::auto_ptr< oadrProfileName_type > oadrProfileName,
                 ::std::auto_ptr< oadrTransports_type > oadrTransports)
    : ::xml_schema::type (),
      oadrProfileName_ (oadrProfileName, this),
      oadrTransports_ (oadrTransports, this)
    {
    }

    oadrProfile::
    oadrProfile (const oadrProfile& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      oadrProfileName_ (x.oadrProfileName_, f, this),
      oadrTransports_ (x.oadrTransports_, f, this)
    {
    }

    oadrProfile::
    oadrProfile (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      oadrProfileName_ (this),
      oadrTransports_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void oadrProfile::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrProfileName
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "oadrProfileName",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< oadrProfileName_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!oadrProfileName_.present ())
            {
              ::std::auto_ptr< oadrProfileName_type > r (
                dynamic_cast< oadrProfileName_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->oadrProfileName_.set (r);
              continue;
            }
          }
        }

        // oadrTransports
        //
        if (n.name () == "oadrTransports" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::auto_ptr< oadrTransports_type > r (
            oadrTransports_traits::create (i, f, this));

          if (!oadrTransports_.present ())
          {
            this->oadrTransports_.set (r);
            continue;
          }
        }

        break;
      }

      if (!oadrProfileName_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrProfileName",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrTransports_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrTransports",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrProfile* oadrProfile::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrProfile (*this, f, c);
    }

    oadrProfile& oadrProfile::
    operator= (const oadrProfile& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->oadrProfileName_ = x.oadrProfileName_;
        this->oadrTransports_ = x.oadrTransports_;
      }

      return *this;
    }

    oadrProfile::
    ~oadrProfile ()
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
    operator<< (::xercesc::DOMElement& e, const oadrProfile& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // oadrProfileName
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const oadrProfile::oadrProfileName_type& x (i.oadrProfileName ());
        if (typeid (oadrProfile::oadrProfileName_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "oadrProfileName",
              "http://openadr.org/oadr-2.0b/2012/07",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "oadrProfileName",
            "http://openadr.org/oadr-2.0b/2012/07",
            true, true, e, x);
      }

      // oadrTransports
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrTransports",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrTransports ();
      }
    }
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

