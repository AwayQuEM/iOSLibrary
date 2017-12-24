//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class CALayer, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarButtonActionItemView : UIStatusBarItemView
{
    UIButton *_button;
    UIButton *_externalButton;
    _Bool _selected;
    CALayer *_ringLayer;
}

@property(retain, nonatomic) CALayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)setLayerHighlightImage:(id)arg1;
- (struct CGRect)_contentsImageFrame;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)usesAdvancedActions;
- (_Bool)showsTouchWhenHighlighted;
- (long long)buttonType;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(long long)arg1;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)updateContentsAndWidth;
- (_Bool)allowsUserInteraction;
- (id)highlightImage;
- (id)_createButton;
@property(readonly, nonatomic) _Bool extendsHitTestingFrame;

@end

