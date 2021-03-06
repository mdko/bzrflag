// Copyright (C) 2008-2010 NICTA (www.nicta.com.au)
// Copyright (C) 2008-2010 Conrad Sanderson
// 
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.


//! \addtogroup GlueCube
//! @{



template<typename T1, typename T2, typename glue_type>
inline
GlueCube<T1,T2,glue_type>::GlueCube(const BaseCube<typename T1::elem_type, T1>& in_A, const BaseCube<typename T1::elem_type, T2>& in_B)
  : A(in_A.get_ref())
  , B(in_B.get_ref())
  {
  arma_extra_debug_sigprint();
  }



template<typename T1, typename T2, typename glue_type>
inline
GlueCube<T1,T2,glue_type>::~GlueCube()
  {
  arma_extra_debug_sigprint();
  }



//! @}
