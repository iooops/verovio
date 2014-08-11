/////////////////////////////////////////////////////////////////////////////
// Authors:     Laurent Pugin and Rodolfo Zitellini
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////// 
// NOTE: this file was generated with the Verovio libmei version and 
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_ATTS_FIGTABLE_H__
#define __VRV_ATTS_FIGTABLE_H__

#include "att.h"
#include "pugixml.hpp"

//----------------------------------------------------------------------------



namespace vrv {
    
//----------------------------------------------------------------------------
// AttTabular
//----------------------------------------------------------------------------

class AttTabular: public Att
{
public:
    AttTabular();
    virtual ~AttTabular();
    
    /** Reset the default values for the attribute class **/
    void ResetTabular();
    
    /** Read the values for the attribute class **/
    bool ReadTabular( pugi::xml_node element );
    
    /** Write the values for the attribute class **/
    bool WriteTabular( pugi::xml_node element );
    
    /**
     * @name Setters and getters for class members
     */
    ///@{
    void SetColspanInt(int colspanInt_) { m_colspanInt = colspanInt_; };
    int GetColspanInt() const { return m_colspanInt; };
    //
    void SetRowspanInt(int rowspanInt_) { m_rowspanInt = rowspanInt_; };
    int GetRowspanInt() const { return m_rowspanInt; };
    ///@}

protected:
    /** The number of columns spanned by this cell. **/
    int m_colspanInt;
    /** The number of rows spanned by this cell. **/
    int m_rowspanInt;

/* include <attrowspan> */
};

} // vrv namespace

#endif  // __VRV_ATTS_FIGTABLE_H__

