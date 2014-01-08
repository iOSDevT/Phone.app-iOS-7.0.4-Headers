/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSArray, UIControl, PHVoicemailCell, UITableView;
@protocol PHVoicemailListMaskViewDelegate;

__attribute__((visibility("hidden")))
@interface PHVoicemailListMaskView : XXUnknownSuperclass {
	UIControl* _topGrayView;
	UIView* _topLineView;
	UIControl* _bottomGrayView;
	UIView* _bottomLineView;
	NSArray* _cellViewConstraints;
	NSArray* _lineConstraints;
	UITableView* _tableView;
	BOOL _showingGrayLayer;
	PHVoicemailCell* _cellToShow;
	id<PHVoicemailListMaskViewDelegate> _listMaskViewDelegate;
}
@property(assign) id<PHVoicemailListMaskViewDelegate> listMaskViewDelegate;
@property(assign, nonatomic) BOOL showingGrayLayer;
@property(retain, nonatomic) PHVoicemailCell* cellToShow;
-(void)_grayViewTouchUpInside:(id)inside withEvent:(id)event;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)recalculateMaskPosition;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame tableView:(id)view;
-(id)initWithFrame:(CGRect)frame;
@end
