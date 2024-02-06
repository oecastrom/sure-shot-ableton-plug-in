/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class CrunchCaptainAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    CrunchCaptainAudioProcessorEditor (CrunchCaptainAudioProcessor&);
    ~CrunchCaptainAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void setGain(float newGain) { mGain = newGain; }

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    CrunchCaptainAudioProcessor& audioProcessor;
    float mGain { 1.0f }; // Default to 1.0f, meaning no change in gain
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CrunchCaptainAudioProcessorEditor)
};
