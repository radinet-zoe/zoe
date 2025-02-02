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

#include "DigestMethodType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // DigestMethodType
    // 

    const DigestMethodType::Algorithm_type& DigestMethodType::
    Algorithm () const
    {
      return this->Algorithm_.get ();
    }

    DigestMethodType::Algorithm_type& DigestMethodType::
    Algorithm ()
    {
      return this->Algorithm_.get ();
    }

    void DigestMethodType::
    Algorithm (const Algorithm_type& x)
    {
      this->Algorithm_.set (x);
    }

    void DigestMethodType::
    Algorithm (::std::auto_ptr< Algorithm_type > x)
    {
      this->Algorithm_.set (x);
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
    // DigestMethodType
    //

    DigestMethodType::
    DigestMethodType (const Algorithm_type& Algorithm)
    : ::xml_schema::type (),
      Algorithm_ (Algorithm, this)
    {
    }

    DigestMethodType::
    DigestMethodType (const DigestMethodType& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Algorithm_ (x.Algorithm_, f, this)
    {
    }

    DigestMethodType::
    DigestMethodType (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Algorithm_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void DigestMethodType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        break;
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "Algorithm" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          this->Algorithm_.set (Algorithm_traits::create (i, f, this));
          continue;
        }
      }

      if (!Algorithm_.present ())
      {
        throw ::xsd::cxx::tree::expected_attribute< char > (
          "Algorithm",
          "http://www.w3.org/2000/09/xmldsig#");
      }
    }

    DigestMethodType* DigestMethodType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class DigestMethodType (*this, f, c);
    }

    DigestMethodType& DigestMethodType::
    operator= (const DigestMethodType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->Algorithm_ = x.Algorithm_;
      }

      return *this;
    }

    DigestMethodType::
    ~DigestMethodType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, DigestMethodType >
    _xsd_DigestMethodType_type_factory_init (
      "DigestMethodType",
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
    operator<< (::xercesc::DOMElement& e, const DigestMethodType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // Algorithm
      //
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Algorithm",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        a << i.Algorithm ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, DigestMethodType >
    _xsd_DigestMethodType_type_serializer_init (
      "DigestMethodType",
      "http://www.w3.org/2000/09/xmldsig#");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

