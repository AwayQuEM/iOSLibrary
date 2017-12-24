//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>
{
}

- (struct UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1;
- (struct CGSize)buttonIntrinsicContentSize:(id)arg1;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)buttonWillMoveToSuperview:(id)arg1;
- (void)buttonWillMoveToWindow:(id)arg1;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (_Bool)buttonEnabledState:(id)arg1 forRequestedState:(_Bool)arg2;
- (_Bool)buttonHighlitedState:(id)arg1 forRequestedState:(_Bool)arg2;
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;
@property(nonatomic) _Bool backButtonConstraintsActive;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIView *backIndicatorView;
- (_Bool)supportsBackButtons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

