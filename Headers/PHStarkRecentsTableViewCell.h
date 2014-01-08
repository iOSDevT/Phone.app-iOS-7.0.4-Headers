/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewCell.h"

@class UILabel, NSLayoutConstraint, UIDateLabel, PHStarkLozengeLabel;

__attribute__((visibility("hidden")))
@interface PHStarkRecentsTableViewCell : PHStarkGenericTableViewCell {
	UILabel* _nameLabel;
	UILabel* _phoneNumberTypeLabel;
	UIDateLabel* _dateLabel;
	NSLayoutConstraint* _nameLabelVerticalLayoutConstraint;
	NSLayoutConstraint* _dateLabelVerticalLayoutConstraint;
	PHStarkLozengeLabel* _missedCallLabel;
}
@property(retain) PHStarkLozengeLabel* missedCallLabel;
@property(retain) NSLayoutConstraint* dateLabelVerticalLayoutConstraint;
@property(retain) NSLayoutConstraint* nameLabelVerticalLayoutConstraint;
@property(retain) UIDateLabel* dateLabel;
@property(retain) UILabel* phoneNumberTypeLabel;
@property(retain) UILabel* nameLabel;
-(void)setRepresentedRecentCall:(id)call;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
