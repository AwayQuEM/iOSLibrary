//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarTimeItemView : UIStatusBarItemView
{
    NSString *_timeString;
    _Bool _useCustomFadeAnimation;
}

@property(nonatomic) _Bool useCustomFadeAnimation; // @synthesize useCustomFadeAnimation=_useCustomFadeAnimation;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (void)setFrame:(struct CGRect)arg1;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (long long)textStyle;
- (id)contentsImage;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

