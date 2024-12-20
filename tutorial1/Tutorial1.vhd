----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:04:54 09/09/2023 
-- Design Name: 
-- Module Name:    Tutorial1 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Tutorial1 is
    Port ( clk : in  STD_LOGIC;
           led : out  STD_LOGIC_VECTOR (7 downto 0);
           switches : in  STD_LOGIC_VECTOR (3 downto 0));
end Tutorial1;

architecture Behavioral of Tutorial1 is
																-- This part is just for the part 2 for Functional simulation only
	signal counter: std_logic_vector(29 downto 0) := (others => '0');
																--remove for first part for bench simulation
begin

	process(clk)
	begin
		if(clk'Event and clk='1') then
			if(switches(0)='1') then
				counter<=counter+'1';
			else
				counter<=counter-'1';
			end if;
		end if;
end process;

	led(7 downto 0)<=counter(29 downto 22);

end Behavioral;

