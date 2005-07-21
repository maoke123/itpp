/*---------------------------------------------------------------------------*
 *                                   IT++			             *
 *---------------------------------------------------------------------------*
 * Copyright (c) 1995-2005 by Tony Ottosson, Thomas Eriksson, P�l Frenger,   *
 * Tobias Ringstr�m, and Jonas Samuelsson.                                   *
 *                                                                           *
 * Permission to use, copy, modify, and distribute this software and its     *
 * documentation under the terms of the GNU General Public License is hereby *
 * granted. No representations are made about the suitability of this        *
 * software for any purpose. It is provided "as is" without expressed or     *
 * implied warranty. See the GNU General Public License for more details.    *
 *---------------------------------------------------------------------------*/

/*!
  \file
  \brief Definitions of operators for complex scalars, and vectors and matricies of different types
  \author Tony Ottosson

  $Revision$

  $Date$
*/

#ifndef __operators_h
#define __operators_h

#include <itpp/base/vec.h>
#include <itpp/base/mat.h>
#include <itpp/base/scalfunc.h>
#include <itpp/base/converters.h>

namespace itpp {

  //---------------------- between scalars and complex<double> --------------------
  //!
  inline std::complex<double> operator+(const int &x, const std::complex<double> &y) {return std::complex<double>(x+y.real(), x+y.imag());}
  //!
  inline std::complex<double> operator+(const float &x, const std::complex<double> &y) {return std::complex<double>(x+y.real(), x+y.imag());}
  //!
  inline std::complex<double> operator+(const std::complex<double> &x, const int &y) {return std::complex<double>(x.real()+y, x.imag()+y);}
  //!
  inline std::complex<double> operator+(const std::complex<double> &x, const float &y) {return std::complex<double>(x.real()+y, x.imag()+y);}

  //!
  inline std::complex<double> operator-(const int &x, const std::complex<double> &y) {return std::complex<double>(x-y.real(), x-y.imag());}
  //!
  inline std::complex<double> operator-(const float &x, const std::complex<double> &y) {return std::complex<double>(x-y.real(), x-y.imag());}
  //!
  inline std::complex<double> operator-(const std::complex<double> &x, const int &y) {return std::complex<double>(x.real()-y, x.imag()-y);}
  //!
  inline std::complex<double> operator-(const std::complex<double> &x, const float &y) {return std::complex<double>(x.real()-y, x.imag()-y);}

  //!
  inline std::complex<double> operator*(const int &x, const std::complex<double> &y) {return std::complex<double>(x*y.real(), x*y.imag());}
  //!
  inline std::complex<double> operator*(const float &x, const std::complex<double> &y) {return std::complex<double>(x*y.real(), x*y.imag());}
  //!
  inline std::complex<double> operator*(const std::complex<double> &x, const int &y) {return std::complex<double>(x.real()*y, x.imag()*y);}
  //!
  inline std::complex<double> operator*(const std::complex<double> &x, const float &y) {return std::complex<double>(x.real()*y, x.imag()*y);}

  //!
  inline std::complex<double> operator/(const std::complex<double> &x, const int &y) {return std::complex<double>(x.real()/y, x.imag()/y);}
  //!
  inline std::complex<double> operator/(const std::complex<double> &x, const float &y) {return std::complex<double>(x.real()/y, x.imag()/y);}


  //---------------------- between vec and scalar --------------------

  /*!
    \relates Vec
    \brief Addition operator for float and vec
  */
  inline vec operator+(const float &s, const vec &v) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for short and vec
  */
  inline vec operator+(const short &s, const vec &v) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for int and vec
  */
  inline vec operator+(const int &s, const vec &v) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for vec and float
  */
  inline vec operator+(const vec &v, const float &s) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for vec and short
  */
  inline vec operator+(const vec &v, const short &s) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for vec and int
  */
  inline vec operator+(const vec &v, const int &s) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Subtraction operator for float and vec
  */
  inline vec operator-(const float &s, const vec &v) {return static_cast<double>(s)-v;}

  /*!
    \relates Vec
    \brief Subtraction operator for short and vec
  */
  inline vec operator-(const short &s, const vec &v) {return static_cast<double>(s)-v;}

  /*!
    \relates Vec
    \brief Subtraction operator for int and vec
  */
  inline vec operator-(const int &s, const vec &v) {return static_cast<double>(s)-v;}

  /*!
    \relates Vec
    \brief Subtraction operator for vec and float
  */
  inline vec operator-(const vec &v, const float &s) {return v-static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Subtraction operator for vec and short
  */
  inline vec operator-(const vec &v, const short &s) {return v-static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Subtraction operator for vec and int
  */
  inline vec operator-(const vec &v, const int &s) {return v-static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Multiplication operator for float and vec
  */
  inline vec operator*(const float &s, const vec &v) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for short and vec
  */
  inline vec operator*(const short &s, const vec &v) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for int and vec
  */
  inline vec operator*(const int &s, const vec &v) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for complex<double> and vec
  */
  cvec operator*(const std::complex<double> &s, const vec &v);

  /*!
    \relates Vec
    \brief Multiplication operator for vec and float
  */
  inline vec operator*(const vec &v, const float &s) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for vec and short
  */
  inline vec operator*(const vec &v, const short &s) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for vec and int
  */
  inline vec operator*(const vec &v, const int &s) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for vec and complex<double>
  */
  cvec operator*(const vec &v, const std::complex<double> &s);

  /*!
    \relates Vec
    \brief Division operator for vec and float
  */
  inline vec operator/(const vec &v, const float &s) {return v/static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Division operator for vec and short
  */
  inline vec operator/(const vec &v, const short &s) {return v/static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Division operator for vec and int
  */
  inline vec operator/(const vec &v, const int &s) {return v/static_cast<double>(s);}


  //---------------------- between ivec and scalar --------------------

  /*!
    \relates Vec
    \brief Addition operator for double and ivec
  */
  vec operator+(const double &s, const ivec &v);

  /*!
    \relates Vec
    \brief Addition operator for ivec and double
  */
  inline vec operator+(const ivec &v, const double &s) { return s+v;}

  /*!
    \relates Vec
    \brief Subtraction operator for double and ivec
  */
  vec operator-(const double &s, const ivec &v);

  /*!
    \relates Vec
    \brief Subtraction operator for ivec and double
  */
  inline vec operator-(const ivec &v, const double &s) { return v+(-s); }

  /*!
    \relates Vec
    \brief Multiplication operator for double and ivec
  */
  vec operator*(const double &s, const ivec &v);

  /*!
    \relates Vec
    \brief Multiplication operator for ivec and double
  */
  inline vec operator*(const ivec &v, const double &s) { return s*v; }

  /*!
    \relates Vec
    \brief Division operator for double and ivec
  */
  vec operator/(const double &s, const ivec &v);

  /*!
    \relates Vec
    \brief Division operator for ivec and double
  */
  vec operator/(const ivec &v, const double &s);

  /*!
    \relates Vec
    \brief Addition operator for complex<double> and ivec
  */
  cvec operator+(const std::complex<double> &s, const ivec &v);

  /*!
    \relates Vec
    \brief Addition operator for ivec and complex<double>
  */
  inline cvec operator+(const ivec &v, const std::complex<double> &s) { return s+v;}

  /*!
    \relates Vec
    \brief Subtraction operator for complex<double> and ivec
  */
  cvec operator-(const std::complex<double> &s, const ivec &v);

  /*!
    \relates Vec
    \brief Subtraction operator for ivec and complex<double>
  */
  inline cvec operator-(const ivec &v, const std::complex<double> &s) { return v+(-s); }

  /*!
    \relates Vec
    \brief Multiplication operator for complex<double> and ivec
  */
  cvec operator*(const std::complex<double> &s, const ivec &v);

  /*!
    \relates Vec
    \brief Multiplication operator for ivec and complex<double>
  */
  inline cvec operator*(const ivec &v, const std::complex<double> &s) { return s*v; }

  /*!
    \relates Vec
    \brief Division operator for complex<double> and ivec
  */
  cvec operator/(const std::complex<double> &s, const ivec &v);

  /*!
    \relates Vec
    \brief Division operator for ivec and complex<double>
  */
  cvec operator/(const ivec &v, const std::complex<double> &s);

  //---------------------- between cvec and scalar --------------------

  /*!
    \relates Vec
    \brief Addition operator for double and cvec
  */
  cvec operator+(const double &s, const cvec &v);

  /*!
    \relates Vec
    \brief Addition operator for float and cvec
  */
  inline cvec operator+(const float &s, const cvec &v) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for short and cvec
  */
  inline cvec operator+(const short &s, const cvec &v) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for int and cvec
  */
  inline cvec operator+(const int &s, const cvec &v) {return static_cast<double>(s)+v;}

  /*!
    \relates Vec
    \brief Addition operator for cvec and float
  */
  inline cvec operator+(const cvec &v, const float &s) {return s+v;}

  /*!
    \relates Vec
    \brief Addition operator for cvec and double
  */
  inline cvec operator+(const cvec &v, const double &s) {return s+v;}

  /*!
    \relates Vec
    \brief Addition operator for cvec and short
  */
  inline cvec operator+(const cvec &v, const short &s) {return s+v;}

  /*!
    \relates Vec
    \brief Addition operator for cvec and int
  */
  inline cvec operator+(const cvec &v, const int &s) {return s+v;}

  /*!
    \relates Vec
    \brief Subtraction operator for double and cvec
  */
  cvec operator-(const double &s, const cvec &v);

  /*!
    \relates Vec
    \brief Subtraction operator for float and cvec
  */
  inline cvec operator-(const float &s, const cvec &v) {return static_cast<double>(s)-v;}

  /*!
    \relates Vec
    \brief Subtraction operator for short and cvec
  */
  inline cvec operator-(const short &s, const cvec &v) {return static_cast<double>(s)-v;}

  /*!
    \relates Vec
    \brief Subtraction operator for int and cvec
  */
  inline cvec operator-(const int &s, const cvec &v) {return static_cast<double>(s)-v;}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and float
  */
  inline cvec operator-(const cvec &v, const float &s) {return v+(-s);}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and double
  */
  inline cvec operator-(const cvec &v, const double &s) {return v+(-s);}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and short
  */
  inline cvec operator-(const cvec &v, const short &s) {return v+(-s);}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and int
  */
  inline cvec operator-(const cvec &v, const int &s) {return v+(-s);}

  /*!
    \relates Vec
    \brief Multiplication operator for double and cvec
  */
  cvec operator*(const double &s, const cvec &v);

  /*!
    \relates Vec
    \brief Multiplication operator for float and cvec
  */
  inline cvec operator*(const float &s, const cvec &v) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for short and cvec
  */
  inline cvec operator*(const short &s, const cvec &v) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for int and cvec
  */
  inline cvec operator*(const int &s, const cvec &v) {return static_cast<double>(s)*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and float
  */
  inline cvec operator*(const cvec &v, const float &s) {return s*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and double
  */
  inline cvec operator*(const cvec &v, const double &s) {return s*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and short
  */
  inline cvec operator*(const cvec &v, const short &s) {return s*v;}

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and int
  */
  inline cvec operator*(const cvec &v, const int &s) {return s*v;}

  /*!
    \relates Vec
    \brief Division operator for cvec and double
  */
  cvec operator/(const cvec &v, const double &s);

  /*!
    \relates Vec
    \brief Division operator for double and cvec
  */
  cvec operator/(const double &s, const cvec &v);

  /*!
    \relates Vec
    \brief Division operator for cvec and float
  */
  inline cvec operator/(const cvec &v, const float &s) {return v/static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Division operator for cvec and short
  */
  inline cvec operator/(const cvec &v, const short &s) {return v/static_cast<double>(s);}

  /*!
    \relates Vec
    \brief Division operator for cvec and int
  */
  inline cvec operator/(const cvec &v, const int &s) {return v/static_cast<double>(s);}

  //---------------------- between mat and scalar --------------------

  /*!
    \relates Mat
    \brief Addition operator for float and mat
  */
  inline mat operator+(const float &s, const mat &m) {return static_cast<double>(s)+m;}

  /*!
    \relates Mat
    \brief Addition operator for short and mat
  */
  inline mat operator+(const short &s, const mat &m) {return static_cast<double>(s)+m;}

  /*!
    \relates Mat
    \brief Addition operator for int and mat
  */
  inline mat operator+(const int &s, const mat &m) {return static_cast<double>(s)+m;}

  /*!
    \relates Mat
    \brief Addition operator for mat and float
  */
  inline mat operator+(const mat &m, const float &s) {return static_cast<double>(s)+m;}

  /*!
    \relates Mat
    \brief Addition operator for mat and short
  */
  inline mat operator+(const mat &m, const short &s) {return static_cast<double>(s)+m;}

  /*!
    \relates Mat
    \brief Addition operator for mat and int
  */
  inline mat operator+(const mat &m, const int &s) {return static_cast<double>(s)+m;}

  /*!
    \relates Mat
    \brief Subtraction operator for float and mat
  */
  inline mat operator-(const float &s, const mat &m) {return static_cast<double>(s)-m;}

  /*!
    \relates Mat
    \brief Subtraction operator for short and mat
  */
  inline mat operator-(const short &s, const mat &m) {return static_cast<double>(s)-m;}

  /*!
    \relates Mat
    \brief Subtraction operator for int and mat
  */
  inline mat operator-(const int &s, const mat &m) {return static_cast<double>(s)-m;}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and float
  */
  inline mat operator-(const mat &m, const float &s) {return m-static_cast<double>(s);}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and short
  */
  inline mat operator-(const mat &m, const short &s) {return m-static_cast<double>(s);}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and int
  */
  inline mat operator-(const mat &m, const int &s) {return m-static_cast<double>(s);}

  /*!
    \relates Mat
    \brief Multiplication operator for float and mat
  */
  inline mat operator*(const float &s, const mat &m) {return static_cast<double>(s)*m;}

  /*!
    \relates Mat
    \brief Multiplication operator for short and mat
  */
  inline mat operator*(const short &s, const mat &m) {return static_cast<double>(s)*m;}

  /*!
    \relates Mat
    \brief Multiplication operator for int and mat
  */
  inline mat operator*(const int &s, const mat &m) {return static_cast<double>(s)*m;}

  /*!
    \relates Mat
    \brief Multiplication operator for mat and float
  */
  inline mat operator*(const mat &m, const float &s) {return static_cast<double>(s)*m;}

  /*!
    \relates Mat
    \brief Multiplication operator for mat and short
  */
  inline mat operator*(const mat &m, const short &s) {return static_cast<double>(s)*m;}

  /*!
    \relates Mat
    \brief Multiplication operator for mat and int
  */
  inline mat operator*(const mat &m, const int &s) {return static_cast<double>(s)*m;}

  /*!
    \relates Mat
    \brief Division operator for mat and float
  */
  inline mat operator/(const mat &m, const float &s) {return m/static_cast<double>(s);}

  /*!
    \relates Mat
    \brief Division operator for mat and short
  */
  inline mat operator/(const mat &m, const short &s) {return m/static_cast<double>(s);}

  /*!
    \relates Mat
    \brief Division operator for mat and int
  */
  inline mat operator/(const mat &m, const int &s) {return m/static_cast<double>(s);}

  //---------------------- between cmat and scalar --------------------

  /*!
    \relates Mat
    \brief Addition operator for double and cmat
  */
  cmat operator+(const double &s, const cmat &m);

  /*!
    \relates Mat
    \brief Subtraction operator for double and cmat
  */
  cmat operator-(const double &s, const cmat &m);

  /*!
    \relates Mat
    \brief Multiplication operator for double and cmat
  */
  cmat operator*(const double &s, const cmat &m);

  /*!
    \relates Mat
    \brief Multiplication operator for complex<double> and mat
  */
  cmat operator*(const std::complex<double> &s, const mat &m);

  /*!
    \relates Mat
    \brief Multiplication operator for mat and complex<double>
  */
  inline cmat operator*(const mat &m, const std::complex<double> &s) {return s*m;}

  /*!
    \relates Mat
    \brief Division operator for cmat and double
  */
  cmat operator/(const cmat &m, const double &s);

  //---------------------- between vec and vectors --------------------

  //#ifdef _MSC_VER
  // These operators are uncommented when using the Microsoft Developer Studio compiler due
  // to internal compiling error. Hopefully this compiler-bug will be fixed in the near future.
  //#else

  /*!
    \relates Vec
    \brief Addition operator for bvec and vec
  */
  vec operator+(const bvec &a, const vec &b);

  /*!
    \relates Vec
    \brief Addition operator for svec and vec
  */
  vec operator+(const svec &a, const vec &b);

  /*!
    \relates Vec
    \brief Addition operator for ivec and vec
  */
  vec operator+(const ivec &a, const vec &b);

  /*!
    \relates Vec
    \brief Addition operator for vec and bvec
  */
  inline vec operator+(const vec &a, const bvec &b) {return b+a;}

  /*!
    \relates Vec
    \brief Addition operator for vec and svec
  */
  inline vec operator+(const vec &a, const svec &b) {return b+a;}

  /*!
    \relates Vec
    \brief Addition operator for vec and ivec
  */
  inline vec operator+(const vec &a, const ivec &b) {return b+a;}

  /*!
    \relates Vec
    \brief Subtraction operator for bvec and vec
  */
  inline vec operator-(const bvec &a, const vec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for svec and vec
  */
  inline vec operator-(const svec &a, const vec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for ivec and vec
  */
  inline vec operator-(const ivec &a, const vec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for vec and bvec
  */
  inline vec operator-(const vec &a, const bvec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for vec and svec
  */
  inline vec operator-(const vec &a, const svec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for vec and ivec
  */
  inline vec operator-(const vec &a, const ivec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Multiplication operator for bvec and vec
  */
  double operator*(const bvec &a, const vec &b);

  /*!
    \relates Vec
    \brief Multiplication operator for svec and vec
  */
  double operator*(const svec &a, const vec &b);

  /*!
    \relates Vec
    \brief Multiplication operator for ivec and vec
  */
  double operator*(const ivec &a, const vec &b);

  /*!
    \relates Vec
    \brief Multiplication operator for vec and bvec
  */
  inline double operator*(const vec &a, const bvec &b) {return b*a;}

  /*!
    \relates Vec
    \brief Multiplication operator for vec and svec
  */
  inline double operator*(const vec &a, const svec &b) {return b*a;}

  /*!
    \relates Vec
    \brief Multiplication operator for vec and ivec
  */
  inline double operator*(const vec &a, const ivec &b) {return b*a;}

  //---------------------- between cvec and vectors --------------------

  /*!
    \relates Vec
    \brief Addition operator for bvec and cvec
  */
  cvec operator+(const bvec &a, const cvec &b);

  /*!
    \relates Vec
    \brief Addition operator for svec and cvec
  */
  cvec operator+(const svec &a, const cvec &b);

  /*!
    \relates Vec
    \brief Addition operator for ivec and cvec
  */
  cvec operator+(const ivec &a, const cvec &b);

  /*!
    \relates Vec
    \brief Addition operator for cvec and bvec
  */
  inline cvec operator+(const cvec &a, const bvec &b) {return b+a;}

  /*!
    \relates Vec
    \brief Addition operator for cvec and svec
  */
  inline cvec operator+(const cvec &a, const svec &b) {return b+a;}

  /*!
    \relates Vec
    \brief Addition operator for cvec and ivec
  */
  inline cvec operator+(const cvec &a, const ivec &b) {return b+a;}

  /*!
    \relates Vec
    \brief Subtraction operator for bvec and cvec
  */
  inline cvec operator-(const bvec &a, const cvec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for svec and cvec
  */
  inline cvec operator-(const svec &a, const cvec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for ivec and cvec
  */
  inline cvec operator-(const ivec &a, const cvec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and bvec
  */
  inline cvec operator-(const cvec &a, const bvec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and svec
  */
  inline cvec operator-(const cvec &a, const svec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Subtraction operator for cvec and ivec
  */
  inline cvec operator-(const cvec &a, const ivec &b) {return a+(-b);}

  /*!
    \relates Vec
    \brief Multiplication operator for bvec and cvec
  */
  std::complex<double> operator*(const bvec &a, const cvec &b);

  /*!
    \relates Vec
    \brief Multiplication operator for svec and cvec
  */
  std::complex<double> operator*(const svec &a, const cvec &b);

  /*!
    \relates Vec
    \brief Multiplication operator for ivec and cvec
  */
  std::complex<double> operator*(const ivec &a, const cvec &b);

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and bvec
  */
  inline std::complex<double> operator*(const cvec &a, const bvec &b) {return b*a;}

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and svec
  */
  inline std::complex<double> operator*(const cvec &a, const svec &b) {return b*a;}

  /*!
    \relates Vec
    \brief Multiplication operator for cvec and ivec
  */
  inline std::complex<double> operator*(const cvec &a, const ivec &b) {return b*a;}

  //---------------------- between mat and matricies --------------------

  /*!
    \relates Mat
    \brief Addition operator for bmat and mat
  */
  mat operator+(const bmat &a, const mat &b);

  /*!
    \relates Mat
    \brief Addition operator for smat and mat
  */
  mat operator+(const smat &a, const mat &b);

  /*!
    \relates Mat
    \brief Addition operator for imat and mat
  */
  mat operator+(const imat &a, const mat &b);

  /*!
    \relates Mat
    \brief Addition operator for mat and bmat
  */
  inline mat operator+(const mat &a, const bmat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Addition operator for mat and smat
  */
  inline mat operator+(const mat &a, const smat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Addition operator for mat and imat
  */
  inline mat operator+(const mat &a, const imat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Subtraction operator for bmat and mat
  */
  inline mat operator-(const bmat &a, const mat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for smat and mat
  */
  inline mat operator-(const smat &a, const mat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for imat and mat
  */
  inline mat operator-(const imat &a, const mat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and bmat
  */
  inline mat operator-(const mat &a, const bmat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and smat
  */
  inline mat operator-(const mat &a, const smat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and imat
  */
  inline mat operator-(const mat &a, const imat &b) {return a+(-b);}

  //---------------------- between cmat and matricies --------------------

  /*!
    \relates Mat
    \brief Addition operator for bmat and cmat
  */
  cmat operator+(const bmat &a, const cmat &b);

  /*!
    \relates Mat
    \brief Addition operator for smat and cmat
  */
  cmat operator+(const smat &a, const cmat &b);

  /*!
    \relates Mat
    \brief Addition operator for imat and cmat
  */
  cmat operator+(const imat &a, const cmat &b);

  /*!
    \relates Mat
    \brief Addition operator for mat and cmat
  */
  cmat operator+(const mat &a, const cmat &b);

  /*!
    \relates Mat
    \brief Addition operator for cmat and bmat
  */
  inline cmat operator+(const cmat &a, const bmat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Addition operator for cmat and smat
  */
  inline cmat operator+(const cmat &a, const smat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Addition operator for cmat and imat
  */
  inline cmat operator+(const cmat &a, const imat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Addition operator for cmat and mat
  */
  inline cmat operator+(const cmat &a, const mat &b) {return b+a;}

  /*!
    \relates Mat
    \brief Subtraction operator for bmat and cmat
  */
  inline cmat operator-(const bmat &a, const cmat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for smat and cmat
  */
  inline cmat operator-(const smat &a, const cmat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for imat and cmat
  */
  inline cmat operator-(const imat &a, const cmat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for mat and cmat
  */
  inline cmat operator-(const mat &a, const cmat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for cmat and bmat
  */
  inline cmat operator-(const cmat &a, const bmat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for cmat and smat
  */
  inline cmat operator-(const cmat &a, const smat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for cmat and imat
  */
  inline cmat operator-(const cmat &a, const imat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Subtraction operator for cmat and mat
  */
  inline cmat operator-(const cmat &a, const mat &b) {return a+(-b);}

  /*!
    \relates Mat
    \brief Multiplication operator for mat and cmat
  */
  inline cmat operator*(const mat &a, const cmat &b) {return to_cmat(a)*b;}

  /*!
    \relates Mat
    \brief Multiplication operator for bmat and cmat
  */
  inline cmat operator*(const bmat &a, const cmat &b) {return to_cmat(a)*b;}

  /*!
    \relates Mat
    \brief Multiplication operator for smat and cmat
  */
  inline cmat operator*(const smat &a, const cmat &b) {return to_cmat(a)*b;}

  /*!
    \relates Mat
    \brief Multiplication operator for imat and cmat
  */
  inline cmat operator*(const imat &a, const cmat &b) {return to_cmat(a)*b;}

  /*!
    \relates Mat
    \brief Multiplication operator for cmat and mat
  */
  inline cmat operator*(const cmat &a, const mat &b) {return a*to_cmat(b);}

  /*!
    \relates Mat
    \brief Multiplication operator for cmat and bmat
  */
  inline cmat operator*(const cmat &a, const bmat &b) {return a*to_cmat(b);}

  /*!
    \relates Mat
    \brief Multiplication operator for cmat and smat
  */
  inline cmat operator*(const cmat &a, const smat &b) {return a*to_cmat(b);}

  /*!
    \relates Mat
    \brief Multiplication operator for cmat and imat
  */
  inline cmat operator*(const cmat &a, const imat &b) {return a*to_cmat(b);}

  //#endif // _MSC_VER ifdef

} //namespace itpp

#endif // __operators_h

