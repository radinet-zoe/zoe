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

#include "pulseCountType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // pulseCountType
    // 

    const pulseCountType::itemDescription_type& pulseCountType::
    itemDescription () const
    {
      return this->itemDescription_.get ();
    }

    pulseCountType::itemDescription_type& pulseCountType::
    itemDescription ()
    {
      return this->itemDescription_.get ();
    }

    void pulseCountType::
    itemDescription (const itemDescription_type& x)
    {
      this->itemDescription_.set (x);
    }

    void pulseCountType::
    itemDescription (::std::auto_ptr< itemDescription_type > x)
    {
      this->itemDescription_.set (x);
    }

    const pulseCountType::itemDescription_type& pulseCountType::
    itemDescription_default_value ()
    {
      return itemDescription_default_value_;
    }

    const pulseCountType::itemUnits_type& pulseCountType::
    itemUnits () const
    {
      return this->itemUnits_.get ();
    }

    pulseCountType::itemUnits_type& pulseCountType::
    itemUnits ()
    {
      return this->itemUnits_.get ();
    }

    void pulseCountType::
    itemUnits (const itemUnits_type& x)
    {
      this->itemUnits_.set (x);
    }

    void pulseCountType::
    itemUnits (::std::auto_ptr< itemUnits_type > x)
    {
      this->itemUnits_.set (x);
    }

    const pulseCountType::itemUnits_type& pulseCountType::
    itemUnits_default_value ()
    {
      return itemUnits_default_value_;
    }

    const pulseCountType::pulseFactor_type& pulseCountType::
    pulseFactor () const
    {
      return this->pulseFactor_.get ();
    }

    pulseCountType::pulseFactor_type& pulseCountType::
    pulseFactor ()
    {
      return this->pulseFactor_.get ();
    }

    void pulseCountType::
    pulseFactor (const pulseFactor_type& x)
    {
      this->pulseFactor_.set (x);
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
    // pulseCountType
    //

    const pulseCountType::itemDescription_type pulseCountType::itemDescription_default_value_ (
      "pulse count");

    const pulseCountType::itemUnits_type pulseCountType::itemUnits_default_value_ (
      "count");

    pulseCountType::
    pulseCountType (const itemDescription_type& itemDescription,
                    const itemUnits_type& itemUnits,
                    const pulseFactor_type& pulseFactor)
    : ::oadr2b::emix::ItemBaseType (),
      itemDescription_ (itemDescription, this),
      itemUnits_ (itemUnits, this),
      pulseFactor_ (pulseFactor, this)
    {
    }

    pulseCountType::
    pulseCountType (::std::auto_ptr< itemDescription_type > itemDescription,
                    ::std::auto_ptr< itemUnits_type > itemUnits,
                    const pulseFactor_type& pulseFactor)
    : ::oadr2b::emix::ItemBaseType (),
      itemDescription_ (itemDescription, this),
      itemUnits_ (itemUnits, this),
      pulseFactor_ (pulseFactor, this)
    {
    }

    pulseCountType::
    pulseCountType (const pulseCountType& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::oadr2b::emix::ItemBaseType (x, f, c),
      itemDescription_ (x.itemDescription_, f, this),
      itemUnits_ (x.itemUnits_, f, this),
      pulseFactor_ (x.pulseFactor_, f, this)
    {
    }

    pulseCountType::
    pulseCountType (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::oadr2b::emix::ItemBaseType (e, f | ::xml_schema::flags::base, c),
      itemDescription_ (this),
      itemUnits_ (this),
      pulseFactor_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void pulseCountType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // itemDescription
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "itemDescription",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< itemDescription_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!itemDescription_.present ())
            {
              ::std::auto_ptr< itemDescription_type > r (
                dynamic_cast< itemDescription_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->itemDescription_.set (r);
              continue;
            }
          }
        }

        // itemUnits
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "itemUnits",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< itemUnits_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!itemUnits_.present ())
            {
              ::std::auto_ptr< itemUnits_type > r (
                dynamic_cast< itemUnits_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->itemUnits_.set (r);
              continue;
            }
          }
        }

        // pulseFactor
        //
        if (n.name () == "pulseFactor" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!pulseFactor_.present ())
          {
            this->pulseFactor_.set (pulseFactor_traits::create (i, f, this));
            continue;
          }
        }

        break;
      }

      if (!itemDescription_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "itemDescription",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!itemUnits_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "itemUnits",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!pulseFactor_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "pulseFactor",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    pulseCountType* pulseCountType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class pulseCountType (*this, f, c);
    }

    pulseCountType& pulseCountType::
    operator= (const pulseCountType& x)
    {
      if (this != &x)
      {
        static_cast< ::oadr2b::emix::ItemBaseType& > (*this) = x;
        this->itemDescription_ = x.itemDescription_;
        this->itemUnits_ = x.itemUnits_;
        this->pulseFactor_ = x.pulseFactor_;
      }

      return *this;
    }

    pulseCountType::
    ~pulseCountType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, pulseCountType >
    _xsd_pulseCountType_type_factory_init (
      "pulseCountType",
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
    operator<< (::xercesc::DOMElement& e, const pulseCountType& i)
    {
      e << static_cast< const ::oadr2b::emix::ItemBaseType& > (i);

      // itemDescription
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const pulseCountType::itemDescription_type& x (i.itemDescription ());
        if (typeid (pulseCountType::itemDescription_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "itemDescription",
              "http://openadr.org/oadr-2.0b/2012/07",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "itemDescription",
            "http://openadr.org/oadr-2.0b/2012/07",
            false, true, e, x);
      }

      // itemUnits
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const pulseCountType::itemUnits_type& x (i.itemUnits ());
        if (typeid (pulseCountType::itemUnits_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "itemUnits",
              "http://openadr.org/oadr-2.0b/2012/07",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "itemUnits",
            "http://openadr.org/oadr-2.0b/2012/07",
            false, true, e, x);
      }

      // pulseFactor
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "pulseFactor",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.pulseFactor ();
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, pulseCountType >
    _xsd_pulseCountType_type_serializer_init (
      "pulseCountType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

