package org{
	import flash.display.*;
	import flash.system.fscommand;
	import flash.display.MovieClip;
	import flash.display.Shape;
	import flash.display.Sprite;
	import flash.display.StageQuality;
	import flash.events.*;
	import flash.utils.Timer;
	public class Soldier extends Man {
		public var HP:Number;
		public var playerName:String;
		public var ip:String;
		public var attackBullet:Bullet;
		public function Soldier(_playerName:String = "",_ip:String= "") {
			var i:Number=Math.random()*100;
			HP=100;
			playerName="player_"+i;
			ip=_ip;
		}
		public function attack():void {
		}
	}
}