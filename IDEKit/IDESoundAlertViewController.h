/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAlertViewController.h>

@class NSMutableArray, NSPopUpButton, NSSound;

@interface IDESoundAlertViewController : IDEAlertViewController
{
    NSPopUpButton *_soundPopUpButton;
    NSMutableArray *_recentSounds;
    NSSound *_playingSound;
}

@property(retain) NSPopUpButton *soundPopUpButton; // @synthesize soundPopUpButton=_soundPopUpButton;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)populatePopUpButton;
- (void)addPathToRecentSounds:(id)arg1;
- (void)chooseSound:(id)arg1;
- (void)selectSound:(id)arg1;
- (void)setAlert:(id)arg1;

@end
