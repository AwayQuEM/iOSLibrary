//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UITextRange;

@protocol UITextDragRequest <NSObject>
@property(readonly, nonatomic) id <UIDragSession> dragSession;
@property(readonly, nonatomic, getter=isSelected) _Bool selected;
@property(readonly, nonatomic) NSArray *existingItems;
@property(readonly, nonatomic) NSArray *suggestedItems;
@property(readonly, nonatomic) UITextRange *dragRange;
@end
