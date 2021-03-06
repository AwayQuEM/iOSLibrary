//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (UIGeometryKeyedCoding)
- (struct UIOffset)decodeUIOffsetForKey:(id)arg1;
- (struct NSDirectionalEdgeInsets)decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGVector)decodeCGVectorForKey:(id)arg1;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (void)encodeUIOffset:(struct UIOffset)arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector)arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
@end

