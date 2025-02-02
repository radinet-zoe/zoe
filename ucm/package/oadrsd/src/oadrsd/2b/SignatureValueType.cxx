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

#include "SignatureValueType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // SignatureValueType
    // 

    const SignatureValueType::Id_optional& SignatureValueType::
    Id () const
    {
      return this->Id_;
    }

    SignatureValueType::Id_optional& SignatureValueType::
    Id ()
    {
      return this->Id_;
    }

    void SignatureValueType::
    Id (const Id_type& x)
    {
      this->Id_.set (x);
    }

    void SignatureValueType::
    Id (const Id_optional& x)
    {
      this->Id_ = x;
    }

    void SignatureValueType::
    Id (::std::auto_ptr< Id_type > x)
    {
      this->Id_.set (x);
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
    // SignatureValueType
    //

    SignatureValueType::
    SignatureValueType ()
    : ::xml_schema::base64_binary (),
      Id_ (this)
    {
    }

    SignatureValueType::
    SignatureValueType (const ::xml_schema::base64_binary& _xsd_base64_binary_base)
    : ::xml_schema::base64_binary (_xsd_base64_binary_base),
      Id_ (this)
    {
    }

    SignatureValueType::
    SignatureValueType (const SignatureValueType& x,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xml_schema::base64_binary (x, f, c),
      Id_ (x.Id_, f, this)
    {
    }

    SignatureValueType::
    SignatureValueType (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xml_schema::base64_binary (e, f | ::xml_schema::flags::base, c),
      Id_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
        this->parse (p, f);
      }
    }

    void SignatureValueType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "Id" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          this->Id_.set (Id_traits::create (i, f, this));
          continue;
        }
      }
    }

    SignatureValueType* SignatureValueType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class SignatureValueType (*this, f, c);
    }

    SignatureValueType& SignatureValueType::
    operator= (const SignatureValueType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::base64_binary& > (*this) = x;
        this->Id_ = x.Id_;
      }

      return *this;
    }

    SignatureValueType::
    ~SignatureValueType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, SignatureValueType >
    _xsd_SignatureValueType_type_factory_init (
      "SignatureValueType",
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
    operator<< (::xercesc::DOMElement& e, const SignatureValueType& i)
    {
      e << static_cast< const ::xml_schema::base64_binary& > (i);

      // Id
      //
      if (i.Id ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Id",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        a << *i.Id ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, SignatureValueType >
    _xsd_SignatureValueType_type_serializer_init (
      "SignatureValueType",
      "http://www.w3.org/2000/09/xmldsig#");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

