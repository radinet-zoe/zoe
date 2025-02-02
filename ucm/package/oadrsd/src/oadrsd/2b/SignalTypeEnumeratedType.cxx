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

#include "SignalTypeEnumeratedType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // SignalTypeEnumeratedType
    // 

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (value v)
    : ::xml_schema::token (_xsd_SignalTypeEnumeratedType_literals_[v])
    {
    }

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const char* v)
    : ::xml_schema::token (v)
    {
    }

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const ::std::string& v)
    : ::xml_schema::token (v)
    {
    }

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const ::xml_schema::token& v)
    : ::xml_schema::token (v)
    {
    }

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const SignalTypeEnumeratedType& v,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
    : ::xml_schema::token (v, f, c)
    {
    }

    SignalTypeEnumeratedType& SignalTypeEnumeratedType::
    operator= (value v)
    {
      static_cast< ::xml_schema::token& > (*this) = 
      ::xml_schema::token (_xsd_SignalTypeEnumeratedType_literals_[v]);

      return *this;
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
  namespace ei
  {
    // SignalTypeEnumeratedType
    //

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const ::xercesc::DOMElement& e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
    : ::xml_schema::token (e, f, c)
    {
      _xsd_SignalTypeEnumeratedType_convert ();
    }

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const ::xercesc::DOMAttr& a,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
    : ::xml_schema::token (a, f, c)
    {
      _xsd_SignalTypeEnumeratedType_convert ();
    }

    SignalTypeEnumeratedType::
    SignalTypeEnumeratedType (const ::std::string& s,
                              const ::xercesc::DOMElement* e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
    : ::xml_schema::token (s, e, f, c)
    {
      _xsd_SignalTypeEnumeratedType_convert ();
    }

    SignalTypeEnumeratedType* SignalTypeEnumeratedType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class SignalTypeEnumeratedType (*this, f, c);
    }

    SignalTypeEnumeratedType::value SignalTypeEnumeratedType::
    _xsd_SignalTypeEnumeratedType_convert () const
    {
      ::xsd::cxx::tree::enum_comparator< char > c (_xsd_SignalTypeEnumeratedType_literals_);
      const value* i (::std::lower_bound (
                        _xsd_SignalTypeEnumeratedType_indexes_,
                        _xsd_SignalTypeEnumeratedType_indexes_ + 11,
                        *this,
                        c));

      if (i == _xsd_SignalTypeEnumeratedType_indexes_ + 11 || _xsd_SignalTypeEnumeratedType_literals_[*i] != *this)
      {
        throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
      }

      return *i;
    }

    const char* const SignalTypeEnumeratedType::
    _xsd_SignalTypeEnumeratedType_literals_[11] =
    {
      "delta",
      "level",
      "multiplier",
      "price",
      "priceMultiplier",
      "priceRelative",
      "setpoint",
      "x-loadControlCapacity",
      "x-loadControlLevelOffset",
      "x-loadControlPercentOffset",
      "x-loadControlSetpoint"
    };

    const SignalTypeEnumeratedType::value SignalTypeEnumeratedType::
    _xsd_SignalTypeEnumeratedType_indexes_[11] =
    {
      ::oadr2b::ei::SignalTypeEnumeratedType::delta,
      ::oadr2b::ei::SignalTypeEnumeratedType::level,
      ::oadr2b::ei::SignalTypeEnumeratedType::multiplier,
      ::oadr2b::ei::SignalTypeEnumeratedType::price,
      ::oadr2b::ei::SignalTypeEnumeratedType::priceMultiplier,
      ::oadr2b::ei::SignalTypeEnumeratedType::priceRelative,
      ::oadr2b::ei::SignalTypeEnumeratedType::setpoint,
      ::oadr2b::ei::SignalTypeEnumeratedType::x_loadControlCapacity,
      ::oadr2b::ei::SignalTypeEnumeratedType::x_loadControlLevelOffset,
      ::oadr2b::ei::SignalTypeEnumeratedType::x_loadControlPercentOffset,
      ::oadr2b::ei::SignalTypeEnumeratedType::x_loadControlSetpoint
    };

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, SignalTypeEnumeratedType >
    _xsd_SignalTypeEnumeratedType_type_factory_init (
      "SignalTypeEnumeratedType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace ei
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
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const SignalTypeEnumeratedType& i)
    {
      e << static_cast< const ::xml_schema::token& > (i);
    }

    void
    operator<< (::xercesc::DOMAttr& a, const SignalTypeEnumeratedType& i)
    {
      a << static_cast< const ::xml_schema::token& > (i);
    }

    void
    operator<< (::xml_schema::list_stream& l,
                const SignalTypeEnumeratedType& i)
    {
      l << static_cast< const ::xml_schema::token& > (i);
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, SignalTypeEnumeratedType >
    _xsd_SignalTypeEnumeratedType_type_serializer_init (
      "SignalTypeEnumeratedType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>

