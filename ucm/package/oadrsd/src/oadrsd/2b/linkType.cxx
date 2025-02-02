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

#include "linkType.hxx"

namespace Atom
{
  // linkType
  // 

  const linkType::href_type& linkType::
  href () const
  {
    return this->href_.get ();
  }

  linkType::href_type& linkType::
  href ()
  {
    return this->href_.get ();
  }

  void linkType::
  href (const href_type& x)
  {
    this->href_.set (x);
  }

  void linkType::
  href (::std::auto_ptr< href_type > x)
  {
    this->href_.set (x);
  }

  const linkType::rel_optional& linkType::
  rel () const
  {
    return this->rel_;
  }

  linkType::rel_optional& linkType::
  rel ()
  {
    return this->rel_;
  }

  void linkType::
  rel (const rel_type& x)
  {
    this->rel_.set (x);
  }

  void linkType::
  rel (const rel_optional& x)
  {
    this->rel_ = x;
  }

  void linkType::
  rel (::std::auto_ptr< rel_type > x)
  {
    this->rel_.set (x);
  }

  const linkType::type_optional& linkType::
  type () const
  {
    return this->type_;
  }

  linkType::type_optional& linkType::
  type ()
  {
    return this->type_;
  }

  void linkType::
  type (const type_type& x)
  {
    this->type_.set (x);
  }

  void linkType::
  type (const type_optional& x)
  {
    this->type_ = x;
  }

  void linkType::
  type (::std::auto_ptr< type_type > x)
  {
    this->type_.set (x);
  }

  const linkType::hreflang_optional& linkType::
  hreflang () const
  {
    return this->hreflang_;
  }

  linkType::hreflang_optional& linkType::
  hreflang ()
  {
    return this->hreflang_;
  }

  void linkType::
  hreflang (const hreflang_type& x)
  {
    this->hreflang_.set (x);
  }

  void linkType::
  hreflang (const hreflang_optional& x)
  {
    this->hreflang_ = x;
  }

  void linkType::
  hreflang (::std::auto_ptr< hreflang_type > x)
  {
    this->hreflang_.set (x);
  }

  const linkType::title_optional& linkType::
  title () const
  {
    return this->title_;
  }

  linkType::title_optional& linkType::
  title ()
  {
    return this->title_;
  }

  void linkType::
  title (const title_type& x)
  {
    this->title_.set (x);
  }

  void linkType::
  title (const title_optional& x)
  {
    this->title_ = x;
  }

  void linkType::
  title (::std::auto_ptr< title_type > x)
  {
    this->title_.set (x);
  }

  const linkType::length_optional& linkType::
  length () const
  {
    return this->length_;
  }

  linkType::length_optional& linkType::
  length ()
  {
    return this->length_;
  }

  void linkType::
  length (const length_type& x)
  {
    this->length_.set (x);
  }

  void linkType::
  length (const length_optional& x)
  {
    this->length_ = x;
  }

  const linkType::base_optional& linkType::
  base () const
  {
    return this->base_;
  }

  linkType::base_optional& linkType::
  base ()
  {
    return this->base_;
  }

  void linkType::
  base (const base_type& x)
  {
    this->base_.set (x);
  }

  void linkType::
  base (const base_optional& x)
  {
    this->base_ = x;
  }

  void linkType::
  base (::std::auto_ptr< base_type > x)
  {
    this->base_.set (x);
  }

  const linkType::lang_optional& linkType::
  lang () const
  {
    return this->lang_;
  }

  linkType::lang_optional& linkType::
  lang ()
  {
    return this->lang_;
  }

  void linkType::
  lang (const lang_type& x)
  {
    this->lang_.set (x);
  }

  void linkType::
  lang (const lang_optional& x)
  {
    this->lang_ = x;
  }

  void linkType::
  lang (::std::auto_ptr< lang_type > x)
  {
    this->lang_.set (x);
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

namespace Atom
{
  // linkType
  //

  linkType::
  linkType (const href_type& href)
  : ::xml_schema::type (),
    href_ (href, this),
    rel_ (this),
    type_ (this),
    hreflang_ (this),
    title_ (this),
    length_ (this),
    base_ (this),
    lang_ (this)
  {
  }

  linkType::
  linkType (const linkType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    href_ (x.href_, f, this),
    rel_ (x.rel_, f, this),
    type_ (x.type_, f, this),
    hreflang_ (x.hreflang_, f, this),
    title_ (x.title_, f, this),
    length_ (x.length_, f, this),
    base_ (x.base_, f, this),
    lang_ (x.lang_, f, this)
  {
  }

  linkType::
  linkType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    href_ (this),
    rel_ (this),
    type_ (this),
    hreflang_ (this),
    title_ (this),
    length_ (this),
    base_ (this),
    lang_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
      this->parse (p, f);
    }
  }

  void linkType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "href" && n.namespace_ ().empty ())
      {
        this->href_.set (href_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "rel" && n.namespace_ ().empty ())
      {
        this->rel_.set (rel_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "type" && n.namespace_ ().empty ())
      {
        this->type_.set (type_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "hreflang" && n.namespace_ ().empty ())
      {
        this->hreflang_.set (hreflang_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "title" && n.namespace_ ().empty ())
      {
        this->title_.set (title_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "length" && n.namespace_ ().empty ())
      {
        this->length_.set (length_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "base" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->base_.set (base_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "lang" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->lang_.set (lang_traits::create (i, f, this));
        continue;
      }
    }

    if (!href_.present ())
    {
      throw ::xsd::cxx::tree::expected_attribute< char > (
        "href",
        "");
    }
  }

  linkType* linkType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class linkType (*this, f, c);
  }

  linkType& linkType::
  operator= (const linkType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->href_ = x.href_;
      this->rel_ = x.rel_;
      this->type_ = x.type_;
      this->hreflang_ = x.hreflang_;
      this->title_ = x.title_;
      this->length_ = x.length_;
      this->base_ = x.base_;
      this->lang_ = x.lang_;
    }

    return *this;
  }

  linkType::
  ~linkType ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, linkType >
  _xsd_linkType_type_factory_init (
    "linkType",
    "http://www.w3.org/2005/Atom");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace Atom
{
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

namespace Atom
{
  void
  operator<< (::xercesc::DOMElement& e, const linkType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // href
    //
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "href",
          e));

      a << i.href ();
    }

    // rel
    //
    if (i.rel ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "rel",
          e));

      a << *i.rel ();
    }

    // type
    //
    if (i.type ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "type",
          e));

      a << *i.type ();
    }

    // hreflang
    //
    if (i.hreflang ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "hreflang",
          e));

      a << *i.hreflang ();
    }

    // title
    //
    if (i.title ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "title",
          e));

      a << *i.title ();
    }

    // length
    //
    if (i.length ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "length",
          e));

      a << *i.length ();
    }

    // base
    //
    if (i.base ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "base",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.base ();
    }

    // lang
    //
    if (i.lang ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "lang",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.lang ();
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, linkType >
  _xsd_linkType_type_serializer_init (
    "linkType",
    "http://www.w3.org/2005/Atom");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

