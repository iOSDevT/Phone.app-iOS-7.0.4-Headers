/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PHRecentCall, NSArray;

__attribute__((visibility("hidden")))
@interface PHRecentsPersonHeaderView : XXUnknownSuperclass {
	PHRecentCall* _recentCall;
	NSArray* _dateLabels;
	NSArray* _summaries;
	float _intrinsicContentHeight;
}
@property(assign) float intrinsicContentHeight;
@property(retain) NSArray* summaries;
@property(retain) NSArray* dateLabels;
@property(readonly, assign) PHRecentCall* recentCall;
+(id)headerViewWithFrame:(CGRect)frame recentCall:(id)call;
-(void)setFrame:(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGSize)intrinsicContentSize;
-(void)_buildView;
-(void)dealloc;
-(id)_initWithFrame:(CGRect)frame recentCall:(id)call;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(id)newSummaryViewForRecentCall:(id)recentCall occurrenceDate:(id)date type:(int)type duration:(double)duration category:(int)category dataUsage:(double)usage;
@end

