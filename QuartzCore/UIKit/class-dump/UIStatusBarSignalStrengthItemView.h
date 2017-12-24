//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView
{
    int _signalStrengthRaw;
    int _signalStrengthBars;
    _Bool _enableRSSI;
    _Bool _showRSSI;
}

- (id)accessibilityHUDRepresentation;
- (id)_stringForRSSI;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)contentsImage;
- (id)_signalStrengthBarsImageName;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

