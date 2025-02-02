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

#include "KeyInfoReferenceType.hxx"

namespace oadr2b
{
  namespace dsig11
  {
    // KeyInfoReferenceType
    // 

    const KeyInfoReferenceType::URI_type& KeyInfoReferenceType::
    URI () const
    {
      return this->URI_.get ();
    }

    KeyInfoReferenceType::URI_type& KeyInfoReferenceType::
    URI ()
    {
      return this->URI_.get ();
    }

    void KeyInfoReferenceType::
    URI (const URI_type& x)
    {
      this->URI_.set (x);
    }

    void KeyInfoReferenceType::
    URI (::std::auto_ptr< URI_type > x)
    {
      this->URI_.set (x);
    }

    const KeyInfoReferenceType::Id_optional& KeyInfoReferenceType::
    Id () const
    {
      return this->Id_;
    }

    KeyInfoReferenceType::Id_optional& KeyInfoReferenceType::
    Id ()
    {
      return this->Id_;
    }

    void KeyInfoReferenceType::
    Id (const Id_type& x)
    {
      this->Id_.set (x);
    }

    void KeyInfoReferenceType::
    Id (const Id_optional& x)
    {
      this->Id_ = x;
    }

    void KeyInfoReferenceType::
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
  namespace dsig11
  {
    // KeyInfoReferenceType
    //

    KeyInfoReferenceType::
    KeyInfoReferenceType (const URI_type& URI)
    : ::xml_schema::type (),
      URI_ (URI, this),
      Id_ (this)
    {
    }

    KeyInfoReferenceType::
    KeyInfoReferenceType (const KeyInfoReferenceType& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      URI_ (x.URI_, f, this),
      Id_ (x.Id_, f, this)
    {
    }

    KeyInfoReferenceType::
    KeyInfoReferenceType (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      URI_ (this),
      Id_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
        this->parse (p, f);
      }
    }

    void KeyInfoReferenceType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "URI" && n.namespace_ () == "http://www.w3.org/2009/xmldsig11#")
        {
          this->URI_.set (URI_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "Id" && n.namespace_ () == "http://www.w3.org/2009/xmldsig11#")
        {
          this->Id_.set (Id_traits::create (i, f, this));
          continue;
        }
      }

      if (!URI_.present ())
      {
        throw ::xsd::cxx::tree::expected_attribute< char > (
          "URI",
          "http://www.w3.org/2009/xmldsig11#");
      }
    }

    KeyInfoReferenceType* KeyInfoReferenceType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class KeyInfoReferenceType (*this, f, c);
    }

    KeyInfoReferenceType& KeyInfoReferenceType::
    operator= (const KeyInfoReferenceType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->URI_ = x.URI_;
        this->Id_ = x.Id_;
      }

      return *this;
    }

    KeyInfoReferenceType::
    ~KeyInfoReferenceType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, KeyInfoReferenceType >
    _xsd_KeyInfoReferenceType_type_factory_init (
      "KeyInfoReferenceType",
      "http://www.w3.org/2009/xmldsig11#");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace dsig11
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
  namespace dsig11
  {
    void
    operator<< (::xercesc::DOMElement& e, const KeyInfoReferenceType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // URI
      //
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "URI",
            "http://www.w3.org/2009/xmldsig11#",
            e));

        a << i.URI ();
      }

      // Id
      //
      if (i.Id ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Id",
            "http://www.w3.org/2009/xmldsig11#",
            e));

        a << *i.Id ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, KeyInfoReferenceType >
    _xsd_KeyInfoReferenceType_type_serializer_init (
      "KeyInfoReferenceType",
      "http://www.w3.org/2009/xmldsig11#");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

