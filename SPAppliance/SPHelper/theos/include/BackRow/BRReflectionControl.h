/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRReflectionControl : BRControl {
@private
	float _reflectionAmount;	// 40 = 0x28
	float _reflectionOffset;	// 44 = 0x2c
	BOOL _flipped;	// 48 = 0x30
}
@property(assign) BOOL flipped;	// G=0x315f3481; S=0x3159e875; converted property
@property(assign) float reflectionAmount;	// G=0x315bea8d; S=0x3159e7dd; converted property
@property(assign) float reflectionOffset;	// G=0x315bea9d; S=0x3159e865; converted property
- (id)init;	// 0x3159e775
- (id)_generateFiltersFrom:(float)from to:(float)to;	// 0x3159e9c1
- (id)_reflectionFilters;	// 0x3159e981
- (id)_unflippedReflectionFilters;	// 0x315f3491
// converted property getter: - (BOOL)flipped;	// 0x315f3481
// converted property getter: - (float)reflectionAmount;	// 0x315bea8d
// converted property getter: - (float)reflectionOffset;	// 0x315bea9d
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x3159e875
- (void)setImage:(id)image;	// 0x315b48bd
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x3159e7dd
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x3159e865
@end
