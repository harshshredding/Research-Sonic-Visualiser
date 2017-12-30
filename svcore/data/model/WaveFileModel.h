/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    Sonic Visualiser
    An audio file viewer and annotation editor.
    Centre for Digital Music, Queen Mary, University of London.
    This file copyright 2006 Chris Cannam and QMUL.
    
    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 2 of the
    License, or (at your option) any later version.  See the file
    COPYING included with this distribution for more information.
*/

#ifndef WAVE_FILE_MODEL_H
#define WAVE_FILE_MODEL_H

#include "RangeSummarisableTimeValueModel.h"

#include <stdlib.h>

class WaveFileModel : public RangeSummarisableTimeValueModel
{
    Q_OBJECT

public:
    virtual ~WaveFileModel();

    virtual sv_frame_t getFrameCount() const = 0;
    virtual int getChannelCount() const = 0;
    virtual sv_samplerate_t getSampleRate() const = 0;
    virtual sv_samplerate_t getNativeRate() const = 0;

    virtual QString getTitle() const = 0;
    virtual QString getMaker() const = 0;
    virtual QString getLocation() const = 0;

    virtual sv_frame_t getStartFrame() const = 0;
    virtual sv_frame_t getEndFrame() const = 0;

    virtual void setStartFrame(sv_frame_t startFrame) = 0;

protected:
    WaveFileModel() { } // only accessible from subclasses
};    

#endif
