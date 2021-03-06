//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol _UIInteractiveHighlighting <NSObject>
- (void)_highlightForInteraction:(id <UIInteraction>)arg1 fractionComplete:(double)arg2 ended:(_Bool)arg3;

@optional
- (long long)_preferredHighlightAnimationStyleForInteraction:(id <UIInteraction>)arg1;
- (void)_highlightDidEndForInteraction:(id <UIInteraction>)arg1;
- (void)_prepareHighlightForInteraction:(id <UIInteraction>)arg1;
@end

