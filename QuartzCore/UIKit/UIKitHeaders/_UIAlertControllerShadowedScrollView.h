//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class _UIAlertControllerGradientView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShadowedScrollView : UIScrollView
{
    _UIAlertControllerGradientView *_shadowView;
    _Bool _shouldPinToBottomOnResize;
}

@property(nonatomic) _Bool shouldPinToBottomOnResize; // @synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize;
- (void).cxx_destruct;
- (void)_updateScrollabilityAndShadow;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)_boundsForPinningToBottomWithNewBounds:(struct CGRect)arg1;

@end

