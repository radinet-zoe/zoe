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

#include "DateTimeInterval.hxx"

#include "UInt32.hxx"

#include "TimeType.hxx"

namespace espi
{
  // DateTimeInterval
  // 

  const DateTimeInterval::duration_optional& DateTimeInterval::
  duration () const
  {
    return this->duration_;
  }

  DateTimeInterval::duration_optional& DateTimeInterval::
  duration ()
  {
    return this->duration_;
  }

  void DateTimeInterval::
  duration (const duration_type& x)
  {
    this->duration_.set (x);
  }

  void DateTimeInterval::
  duration (const duration_optional& x)
  {
    this->duration_ = x;
  }

  void DateTimeInterval::
  duration (::std::auto_ptr< duration_type > x)
  {
    this->duration_.set (x);
  }

  const DateTimeInterval::start_optional& DateTimeInterval::
  start () const
  {
    return this->start_;
  }

  DateTimeInterval::start_optional& DateTimeInterval::
  start ()
  {
    return this->start_;
  }

  void DateTimeInterval::
  start (const start_type& x)
  {
    this->start_.set (x);
  }

  void DateTimeInterval::
  start (const start_optional& x)
  {
    this->start_ = x;
  }

  void DateTimeInterval::
  start (::std::auto_ptr< start_type > x)
  {
    this->start_.set (x);
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

namespace espi
{
  // DateTimeInterval
  //

  DateTimeInterval::
  DateTimeInterval ()
  : ::espi::Object (),
    duration_ (this),
    start_ (this)
  {
  }

  DateTimeInterval::
  DateTimeInterval (const DateTimeInterval& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
  : ::espi::Object (x, f, c),
    duration_ (x.duration_, f, this),
    start_ (x.start_, f, this)
  {
  }

  DateTimeInterval::
  DateTimeInterval (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
  : ::espi::Object (e, f | ::xml_schema::flags::base, c),
    duration_ (this),
    start_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
      this->parse (p, f);
    }
  }

  void DateTimeInterval::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    this->::espi::Object::parse (p, f);

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
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< duration_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->duration_)
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

      // start
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "start",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< start_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->start_)
          {
            ::std::auto_ptr< start_type > r (
              dynamic_cast< start_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->start_.set (r);
            continue;
          }
        }
      }

      break;
    }
  }

  DateTimeInterval* DateTimeInterval::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class DateTimeInterval (*this, f, c);
  }

  DateTimeInterval& DateTimeInterval::
  operator= (const DateTimeInterval& x)
  {
    if (this != &x)
    {
      static_cast< ::espi::Object& > (*this) = x;
      this->duration_ = x.duration_;
      this->start_ = x.start_;
    }

    return *this;
  }

  DateTimeInterval::
  ~DateTimeInterval ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, DateTimeInterval >
  _xsd_DateTimeInterval_type_factory_init (
    "DateTimeInterval",
    "http://naesb.org/espi");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace espi
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

namespace espi
{
  void
  operator<< (::xercesc::DOMElement& e, const DateTimeInterval& i)
  {
    e << static_cast< const ::espi::Object& > (i);

    // duration
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.duration ())
      {
        const DateTimeInterval::duration_type& x (*i.duration ());
        if (typeid (DateTimeInterval::duration_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "duration",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "duration",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // start
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.start ())
      {
        const DateTimeInterval::start_type& x (*i.start ());
        if (typeid (DateTimeInterval::start_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "start",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "start",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, DateTimeInterval >
  _xsd_DateTimeInterval_type_serializer_init (
    "DateTimeInterval",
    "http://naesb.org/espi");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

