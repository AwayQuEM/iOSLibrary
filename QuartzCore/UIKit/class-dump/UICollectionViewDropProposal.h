//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIDropProposal.h>

@interface UICollectionViewDropProposal : UIDropProposal
{
    long long _intent;
}

@property(nonatomic) long long intent; // @synthesize intent=_intent;
- (id)description;
- (long long)dropLocation;
- (id)initWithDropOperation:(unsigned long long)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2;
- (id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2;

@end

