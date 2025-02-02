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

#include "DurationPropType.hxx"

#include "DurationValueType.hxx"

namespace icalendar_2_0
{
  // DurationPropType
  // 

  const DurationPropType::duration_type& DurationPropType::
  duration () const
  {
    return this->duration_.get ();
  }

  DurationPropType::duration_type& DurationPropType::
  duration ()
  {
    return this->duration_.get ();
  }

  void DurationPropType::
  duration (const duration_type& x)
  {
    this->duration_.set (x);
  }

  void DurationPropType::
  duration (::std::auto_ptr< duration_type > x)
  {
    this->duration_.set (x);
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

namespace icalendar_2_0
{
  // DurationPropType
  //

  DurationPropType::
  DurationPropType (const duration_type& duration)
  : ::xml_schema::type (),
    duration_ (duration, this)
  {
  }

  DurationPropType::
  DurationPropType (::std::auto_ptr< duration_type > duration)
  : ::xml_schema::type (),
    duration_ (duration, this)
  {
  }

  DurationPropType::
  DurationPropType (const DurationPropType& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    duration_ (x.duration_, f, this)
  {
  }

  DurationPropType::
  DurationPropType (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    duration_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
      this->parse (p, f);
    }
  }

  void DurationPropType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // duration
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "duration",
            "urn:ietf:params:xml:ns:icalendar-2.0",
            &::xsd::cxx::tree::factory_impl< duration_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!duration_.present ())
          {
            ::std::auto_ptr< duration_type > r (
              dynamic_cast< duration_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->duration_.set (r);
            continue;
          }
        }
      }

      break;
    }

    if (!duration_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "duration",
        "urn:ietf:params:xml:ns:icalendar-2.0");
    }
  }

  DurationPropType* DurationPropType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class DurationPropType (*this, f, c);
  }

  DurationPropType& DurationPropType::
  operator= (const DurationPropType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->duration_ = x.duration_;
    }

    return *this;
  }

  DurationPropType::
  ~DurationPropType ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, DurationPropType >
  _xsd_DurationPropType_type_factory_init (
    "DurationPropType",
    "urn:ietf:params:xml:ns:icalendar-2.0");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace icalendar_2_0
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

namespace icalendar_2_0
{
  void
  operator<< (::xercesc::DOMElement& e, const DurationPropType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // duration
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      const DurationPropType::duration_type& x (i.duration ());
      if (typeid (DurationPropType::duration_type) == typeid (x))
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "duration",
            "urn:ietf:params:xml:ns:icalendar-2.0",
            e));

        s << x;
      }
      else
        tsm.serialize (
          "duration",
          "urn:ietf:params:xml:ns:icalendar-2.0",
          false, true, e, x);
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, DurationPropType >
  _xsd_DurationPropType_type_serializer_init (
    "DurationPropType",
    "urn:ietf:params:xml:ns:icalendar-2.0");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

