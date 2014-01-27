/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBAbstractSizeInspectorProperty.h>

@class NSMatrix, NSPopUpButton, NSStepper, NSTextField, NSUserDefaultsController;

@interface IBSizeInspectorMetricsInspectorProperty : IBAbstractSizeInspectorProperty
{
    NSUserDefaultsController *_userDefaultsController;
    NSPopUpButton *_rectTypePopUp;
    NSMatrix *_pinningKnobMatrix;
    NSTextField *_xTextField;
    NSTextField *_yTextField;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSStepper *_xStepper;
    NSStepper *_yStepper;
    NSStepper *_widthStepper;
    NSStepper *_heightStepper;
    long long _inspectedRectType;
    long long _pinningKnob;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)assignTextField:(id)arg1 valueFromSet:(id)arg2;
- (void)userDidIncrementHeightValue:(id)arg1;
- (void)userDidIncrementWidthValue:(id)arg1;
- (void)userDidIncrementYValue:(id)arg1;
- (void)userDidIncrementXValue:(id)arg1;
- (void)userDidChangeHeightValue:(id)arg1;
- (void)userDidChangeWidthValue:(id)arg1;
- (void)userDidChangeYValue:(id)arg1;
- (void)userDidChangeXValue:(id)arg1;
- (void)updateOriginValues:(id)arg1;
- (void)updateSizeValues:(id)arg1;
- (void)userDidChangeRectType:(id)arg1;
- (void)userDidChangePinningKnob:(id)arg1;
- (id)pinningKnobDefaultsKey;
- (id)rectSetter;
- (id)rectGetter;
- (long long)pinningKnobInFrameSpaceOfView:(id)arg1;
- (long long)convertKnob:(long long)arg1 toFrameSpaceOfView:(id)arg2;

@end
