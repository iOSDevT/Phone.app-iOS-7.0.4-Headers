/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MPDetailSliderDelegate <NSObject>
@optional
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
@end
