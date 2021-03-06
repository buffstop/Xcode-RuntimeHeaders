/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextView.h"

#import "DVTFirstResponderShowingView-Protocol.h"

@class DVTFirstResponderDrawingStrategy, DVTNotificationToken, IDEAttributedStringControlTextViewFocusRingOverlay, NSString;

@interface IDEAttributedStringControlTextView : NSTextView <DVTFirstResponderShowingView>
{
    IDEAttributedStringControlTextViewFocusRingOverlay *_focusRingOverlay;
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    DVTNotificationToken *_scrollViewFrameChangedToken;
    NSString *_placeholder;
}

@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveAttributedPlaceholder;
- (id)attributedPlaceholderAttributes;
- (void)changeColor:(id)arg1;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)insertNewline:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToWindow;
- (void)scrollViewDidMove:(id)arg1;
- (void)repositionOverlay;

// Remaining properties
@property(retain) id <IDEAttributedStringControlTextViewDelegate> delegate; // @dynamic delegate;

@end

