//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextDroppable.h"
#import "UITextPasteConfigurationSupporting.h"

@class NSMutableAttributedString;

@protocol UITextDropSupporting <UITextDroppable, UITextPasteConfigurationSupporting>
- (void)droppingFinished;
- (void)droppingStarted;
- (void)resignDropResponderWithDropPerformed:(_Bool)arg1;
- (void)becomeDropResponder;
- (_Bool)allowsEditingTextAttributes;

@optional
@property(nonatomic) struct CGPoint contentOffsetForSameViewDrops;
- (void)sanitizeAttributedText:(NSMutableAttributedString *)arg1;
@end

