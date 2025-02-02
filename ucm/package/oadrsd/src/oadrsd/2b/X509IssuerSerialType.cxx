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

#include "X509IssuerSerialType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // X509IssuerSerialType
    // 

    const X509IssuerSerialType::X509IssuerName_type& X509IssuerSerialType::
    X509IssuerName () const
    {
      return this->X509IssuerName_.get ();
    }

    X509IssuerSerialType::X509IssuerName_type& X509IssuerSerialType::
    X509IssuerName ()
    {
      return this->X509IssuerName_.get ();
    }

    void X509IssuerSerialType::
    X509IssuerName (const X509IssuerName_type& x)
    {
      this->X509IssuerName_.set (x);
    }

    void X509IssuerSerialType::
    X509IssuerName (::std::auto_ptr< X509IssuerName_type > x)
    {
      this->X509IssuerName_.set (x);
    }

    const X509IssuerSerialType::X509SerialNumber_type& X509IssuerSerialType::
    X509SerialNumber () const
    {
      return this->X509SerialNumber_.get ();
    }

    X509IssuerSerialType::X509SerialNumber_type& X509IssuerSerialType::
    X509SerialNumber ()
    {
      return this->X509SerialNumber_.get ();
    }

    void X509IssuerSerialType::
    X509SerialNumber (const X509SerialNumber_type& x)
    {
      this->X509SerialNumber_.set (x);
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
  namespace sig
  {
    // X509IssuerSerialType
    //

    X509IssuerSerialType::
    X509IssuerSerialType (const X509IssuerName_type& X509IssuerName,
                          const X509SerialNumber_type& X509SerialNumber)
    : ::xml_schema::type (),
      X509IssuerName_ (X509IssuerName, this),
      X509SerialNumber_ (X509SerialNumber, this)
    {
    }

    X509IssuerSerialType::
    X509IssuerSerialType (::std::auto_ptr< X509IssuerName_type > X509IssuerName,
                          const X509SerialNumber_type& X509SerialNumber)
    : ::xml_schema::type (),
      X509IssuerName_ (X509IssuerName, this),
      X509SerialNumber_ (X509SerialNumber, this)
    {
    }

    X509IssuerSerialType::
    X509IssuerSerialType (const X509IssuerSerialType& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      X509IssuerName_ (x.X509IssuerName_, f, this),
      X509SerialNumber_ (x.X509SerialNumber_, f, this)
    {
    }

    X509IssuerSerialType::
    X509IssuerSerialType (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      X509IssuerName_ (this),
      X509SerialNumber_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void X509IssuerSerialType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // X509IssuerName
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "X509IssuerName",
              "http://www.w3.org/2000/09/xmldsig#",
              &::xsd::cxx::tree::factory_impl< X509IssuerName_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!X509IssuerName_.present ())
            {
              ::std::auto_ptr< X509IssuerName_type > r (
                dynamic_cast< X509IssuerName_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->X509IssuerName_.set (r);
              continue;
            }
          }
        }

        // X509SerialNumber
        //
        if (n.name () == "X509SerialNumber" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          if (!X509SerialNumber_.present ())
          {
            this->X509SerialNumber_.set (X509SerialNumber_traits::create (i, f, this));
            continue;
          }
        }

        break;
      }

      if (!X509IssuerName_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "X509IssuerName",
          "http://www.w3.org/2000/09/xmldsig#");
      }

      if (!X509SerialNumber_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "X509SerialNumber",
          "http://www.w3.org/2000/09/xmldsig#");
      }
    }

    X509IssuerSerialType* X509IssuerSerialType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class X509IssuerSerialType (*this, f, c);
    }

    X509IssuerSerialType& X509IssuerSerialType::
    operator= (const X509IssuerSerialType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->X509IssuerName_ = x.X509IssuerName_;
        this->X509SerialNumber_ = x.X509SerialNumber_;
      }

      return *this;
    }

    X509IssuerSerialType::
    ~X509IssuerSerialType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, X509IssuerSerialType >
    _xsd_X509IssuerSerialType_type_factory_init (
      "X509IssuerSerialType",
      "http://www.w3.org/2000/09/xmldsig#");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace sig
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
  namespace sig
  {
    void
    operator<< (::xercesc::DOMElement& e, const X509IssuerSerialType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // X509IssuerName
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const X509IssuerSerialType::X509IssuerName_type& x (i.X509IssuerName ());
        if (typeid (X509IssuerSerialType::X509IssuerName_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "X509IssuerName",
              "http://www.w3.org/2000/09/xmldsig#",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "X509IssuerName",
            "http://www.w3.org/2000/09/xmldsig#",
            false, true, e, x);
      }

      // X509SerialNumber
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509SerialNumber",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << i.X509SerialNumber ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, X509IssuerSerialType >
    _xsd_X509IssuerSerialType_type_serializer_init (
      "X509IssuerSerialType",
      "http://www.w3.org/2000/09/xmldsig#");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

